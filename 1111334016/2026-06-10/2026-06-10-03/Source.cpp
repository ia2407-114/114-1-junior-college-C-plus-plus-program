#include <iostream>
#include <fstream>
#include <string>
#include "Pet.h"
using namespace std;
/*題目3: 呈上題，先建立動物檔animal 結構(變數)，建立二進位檔的存取程式，
具有格式化輸入與輸出的功能，前半部先透過鍵盤輸入n種動物的年齡與身高，
在格式化寫入到檔案中，直到不要繼續輸入為止。後半部再次打開、讀取檔案，
計算所有動物的平均身高與年齡，並將資料寫回檔案中。
最後，將整個檔案內容讀取出來並列印到螢幕中。請利用介面 / 實作分離的程式設計方式完成。*/
int main()
{
    pet file;
    file.input();
    file.read();
    return 0;
}

