
#include <iostream>
#include <string>
#include "pet.h" 
using namespace std;
/*題目1. 利用上週(如上)設計的日期類別，建立pet類別，其成員函數如下:
 pet (name, category (品種), birthday, adoptDate)
 ~pet ( )印出 Bye Bye~~
check_birth( )
check_adopt(... )
print_all_data(... )
必須包含date的物件作為其資料成員
需要有五個檔案:
date.h, date.cpp, pet.h, pet.cpp, main.cpp
建立三個寵物，透過鍵盤輸入他們的生日與領養日，檢查他們的生日與領養日
，並印出他們的詳細資料*/
int main()
{
	string dogname, catname, cowname;
	string category1, category2, category3;
	int dogbirthyear, dogbirthmonth, dogbirthdate;
	int dogadoptyear, dogadoptmonth, dogadoptdate;
	int catbirthyear, catbirthmonth, catbirthdate;
	int catadoptyear, catadoptmonth, catadoptdate;
	int cowbirthyear, cowbirthmonth, cowbirthdate;
	int cowadoptyear, cowadoptmonth, cowadoptdate;
	cout << "輸入狗的名字:";
	cin >> dogname ;
	cout << "輸入狗的品種:";
	cin >> category1;
	cout << "輸入狗的出生日期";
	cin >> dogbirthyear>> dogbirthmonth>> dogbirthdate;
	cout << "輸入狗的領養日期";
	cin >> dogadoptyear>>dogadoptmonth>> dogadoptdate;
	cout << endl;
	cout << "輸入貓的名字:";
	cin >> catname;
	cout << "輸入貓的品種:";
	cin >> category2;
	cout << "輸入貓的出生日期";
	cin >> catbirthyear >> catbirthmonth >> catbirthdate;
	cout << "輸入貓的領養日期";
	cin >> catadoptyear >> catadoptmonth>> catadoptdate;
	cout << endl;
	cout << "輸入牛的名字:";
	cin >> cowname;
	cout << "輸入牛的品種:";
	cin >> category3;
	cout << "輸入牛的出生日期";
	cin >> cowbirthyear >> cowbirthmonth >> cowbirthdate;
	cout << "輸入牛的領養日期";
	cin >> cowadoptyear >> cowadoptmonth>> cowadoptdate;
	cout << endl;
	Date dogbirth(dogbirthyear, dogbirthmonth, dogbirthdate);
	Date dogadopt(dogadoptyear, dogadoptmonth, dogadoptdate);
	Date catbirth(catbirthyear, catbirthmonth, catbirthdate);
	Date catadopt(catadoptyear, catadoptmonth, catadoptdate);
	Date cowbirth(cowbirthyear, cowbirthmonth, cowbirthdate);
	Date cowadopt(cowadoptyear, cowadoptmonth, cowadoptdate);
	PET myDog(dogname, category1, dogbirth, dogadopt);
	PET myCat(catname, category2, catbirth, catadopt);
	PET myCow(cowname, category3, cowbirth, cowadopt);
	cout << endl;
	
} // end main

