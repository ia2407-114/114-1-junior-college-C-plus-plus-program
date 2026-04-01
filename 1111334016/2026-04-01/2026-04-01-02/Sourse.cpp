/*題目1. (利用建構元(constructor)與解構元(destructor)) 在寵物類別中建立建構元與解構元成員函數與資料成員，
建立兩隻寵物物件，透過建構元設定寵物的姓名與年齡(定義為私有資料成員)，最後印出寵物的姓名與年齡。
並且利用解構子印出與寵物再見的訊息。*/
/*題目2. (承上題) 利用"介面與實作分離"的方式，
  將第一題的程式碼拆分成:主程式、介面檔(pet.h)、實作檔(pet.cpp)，
  別存放主程式碼、類別內的成員函數名稱、與成員函數的實作內容*/
#include <iostream>
#include <string> 
using namespace std;
#include "pet.h"

int main()
{
    string nameOfPet; 
    PET mydog("Bob",2), myPet("Ray",0); 
    int ageOfPet;
    
    cout << endl; 
    mydog.displayMessage(); 
    myPet.displayMessage();
} 

