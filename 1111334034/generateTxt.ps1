# 取得腳本所在目錄
$scriptPath = Split-Path -Parent $MyInvocation.MyCommand.Path
if ([string]::IsNullOrEmpty($scriptPath)) {
    $scriptPath = Get-Location
}

# 設定輸出目錄
$outputRoot = Join-Path $scriptPath "txt-ver"

# 建立輸出目錄（如果不存在）
if (!(Test-Path $outputRoot)) {
    New-Item -ItemType Directory -Path $outputRoot | Out-Null
    Write-Host "Created output directory: $outputRoot" -ForegroundColor Cyan
}

# 遞歸尋找所有 .cpp 檔案
$files = Get-ChildItem -Path $scriptPath -Filter "*.cpp" -Recurse
$total = $files.Count
$success = 0
$failed = 0

if ($total -eq 0) {
    Write-Host "No .cpp files found" -ForegroundColor Yellow
    exit
}

Write-Host "Found $total .cpp file(s)" -ForegroundColor Cyan
Write-Host "Output directory: $outputRoot" -ForegroundColor Cyan
Write-Host ("-" * 60) -ForegroundColor Gray

foreach ($file in $files) {
    $current = $success + $failed + 1
    $percent = [math]::Round(($current / $total) * 100)
    
    # 顯示進度
    Write-Progress -Activity "Converting Big5 to UTF-8" `
                   -Status "[$current/$total] Processing $($file.Name)" `
                   -PercentComplete $percent
    
    try {
        # 取得相對路徑
        $relativePath = $file.FullName.Substring($scriptPath.Length).TrimStart('\', '/')
        
        # 建立輸出檔案路徑
        $txtRelativePath = $relativePath -replace '\.cpp$', '.txt'
        $txtFullPath = Join-Path $outputRoot $txtRelativePath
        
        # 建立輸出檔案的目錄（如果不存在）
        $txtDirectory = Split-Path -Parent $txtFullPath
        if (!(Test-Path $txtDirectory)) {
            New-Item -ItemType Directory -Path $txtDirectory -Force | Out-Null
        }
        
        # 讀取 Big5 編碼的內容
        $big5Encoding = [System.Text.Encoding]::GetEncoding(950)
        $content = [System.IO.File]::ReadAllText($file.FullName, $big5Encoding)
        
        # 寫入 UTF-8 編碼（含 BOM）
        $utf8Encoding = New-Object System.Text.UTF8Encoding $true
        [System.IO.File]::WriteAllText($txtFullPath, $content, $utf8Encoding)
        
        $success++
        Write-Host "[OK] $relativePath -> txt-ver/$txtRelativePath" -ForegroundColor Green
    }
    catch {
        $failed++
        Write-Host "[FAIL] $($file.Name): $_" -ForegroundColor Red
    }
}

# 清除進度條
Write-Progress -Activity "Converting Big5 to UTF-8" -Completed

Write-Host ("-" * 60) -ForegroundColor Gray
Write-Host "Conversion Complete!" -ForegroundColor Cyan
Write-Host "Success: $success / Failed: $failed / Total: $total" -ForegroundColor $(if($failed -eq 0){"Green"}else{"Yellow"})
Write-Host "Output directory: $outputRoot" -ForegroundColor Yellow