// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "pet.h" // Employee class definition
using namespace std;

int main()
{
	int y, m, d, yy, mm, dd;

	cout << "輸入生日1: ";
	cin >> y >> m >> d;
	cout << "輸入領養日1: ";
	cin >> yy >> mm >> dd;
	Date birth1(y, m, d);
	Date adopt1(yy, mm, dd);
	cout << endl;

	cout << "輸入生日2: ";
	cin >> y >> m >> d;
	cout << "輸入領養日2: ";
	cin >> yy >> mm >> dd;
	Date birth2(y, m, d);
	Date adopt2(yy, mm, dd);
	cout << endl;

	cout << "輸入生日3: ";
	cin >> y >> m >> d;
	cout << "輸入領養日3: ";
	cin >> yy >> mm >> dd;
	Date birth3(y, m, d);
	Date adopt3(yy, mm, dd);

	Pet mydog("Bob", "Blue", birth1, adopt1);
	Pet mycat("fat", "lue", birth2, adopt2);
	Pet myfrog("strong", "ue", birth3, adopt3);
	cout << endl;

} // end main

