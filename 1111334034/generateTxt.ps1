$rootPath = Get-Location

Get-ChildItem -Path $rootPath -Filter "*.cpp" -Recurse | ForEach-Object {
    $cppFile = $_.FullName
    $txtFile = [System.IO.Path]::ChangeExtension($cppFile, ".txt")
    
    Write-Host "Processing: $($_.Name)" -ForegroundColor Yellow
    
    try {
        $big5 = [System.Text.Encoding]::GetEncoding(950)
        $content = [System.IO.File]::ReadAllText($cppFile, $big5)
        
        $utf8 = New-Object System.Text.UTF8Encoding $true  # $true 表示包含 BOM
        [System.IO.File]::WriteAllText($txtFile, $content, $utf8)
        
        Write-Host "  [OK] Converted to: $([System.IO.Path]::GetFileName($txtFile))" -ForegroundColor Green
    }
    catch {
        Write-Host "  [ERROR] Failed: $_" -ForegroundColor Red
    }
}

Write-Host ""
Write-Host "Conversion Complete!" -ForegroundColor Cyan