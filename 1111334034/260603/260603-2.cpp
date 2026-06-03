#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
 {  
   // 宣告型態為ofstream的輸出串流物件變數appendfile
   // 做為寫入檔案之用
   ofstream appendfile;  
  
   cout << "開啟test.txt文字檔，並新增資料於檔尾\n" ;
      
   // 以寫入模式開啟test.txt檔案，並將新增的資料寫到檔案尾部
   appendfile.open("test.txt", ios_base::app);
   if (appendfile.fail())
    {
      cout << "test.txt檔案無法開啟!\n" ;          
      exit(1) ;
    }  
  
   string data;  
   cout << "輸入(要新增的)資料，以Enter鍵作為結束:\n" ;  
   getline(cin, data);
   appendfile << data << '\n' ;
   if (appendfile.fail())  // 資料寫入appendfile串流失敗時 
    {
       cout << "寫入失敗\n" ;
       exit(1);
    }
  
   appendfile.close();  
   if (appendfile.fail())
    {
       cout << "test.txt檔案無法關閉!\n" ; 
       exit(1) ;
    }

   // 宣告型態為ifstream的輸入串流物件變數readfile
   // 做為讀取檔案之用 
   ifstream readfile;  
    
   // 以唯讀模式開啟test.txt檔案 
   readfile.open("test.txt",ios_base::in);
   if (readfile.fail())
    {
      cout << "test.txt檔案無法開啟!\n" ;          
      exit(1) ;
    }  
  
   char ch;
   int filespace=0;  // 計算檔案所佔用的記憶體空間
   cout << "test.txt文字檔內容為:\n";
   while (1)
    {
       ch=readfile.get();
     
       // readfile串流的檔案指標在檔尾時 
       if (readfile.eof())
           break;
       cout << ch ;    
       filespace ++;    
    }   
   cout << '\n' << "test.txt文字檔所佔的空間為";
   cout << filespace << "個位元組(包括換列字元)\n" ;
     
   // 清除readfile串流的狀態    
   readfile.clear();  
 
   readfile.close();  
   if (readfile.fail())
    {
      cout << "test.txt檔案無法關閉!\n" ;     
      exit(1) ;
    }
   return 0 ;
 }
