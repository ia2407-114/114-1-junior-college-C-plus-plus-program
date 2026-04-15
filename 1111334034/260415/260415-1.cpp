// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "pet.h" // Pet class definition
using namespace std;

int main()
{
   int y, m, d;
   string name, category;

   cout << "=== Pet 1 ===" << endl;
   cout << "Enter name: "; cin >> name;
   cout << "Enter category: "; cin >> category;
   cout << "Enter birthday (year month day): "; cin >> y >> m >> d;
   Date birth1(y, m, d);
   cout << "Enter adopt date (year month day): "; cin >> y >> m >> d;
   Date adopt1(y, m, d);
   Pet pet1(name, category, birth1, adopt1);

   cout << "\n=== Pet 2 ===" << endl;
   cout << "Enter name: "; cin >> name;
   cout << "Enter category: "; cin >> category;
   cout << "Enter birthday (year month day): "; cin >> y >> m >> d;
   Date birth2(y, m, d);
   cout << "Enter adopt date (year month day): "; cin >> y >> m >> d;
   Date adopt2(y, m, d);
   Pet pet2(name, category, birth2, adopt2);

   cout << "\n=== Pet 3 ===" << endl;
   cout << "Enter name: "; cin >> name;
   cout << "Enter category: "; cin >> category;
   cout << "Enter birthday (year month day): "; cin >> y >> m >> d;
   Date birth3(y, m, d);
   cout << "Enter adopt date (year month day): "; cin >> y >> m >> d;
   Date adopt3(y, m, d);
   Pet pet3(name, category, birth3, adopt3);

   cout << "\n--- check_birth ---" << endl;
   pet1.check_birth();
   pet2.check_birth();
   pet3.check_birth();

   cout << "\n--- check_adopt ---" << endl;
   pet1.check_adopt();
   pet2.check_adopt();
   pet3.check_adopt();

   cout << "\n--- print_all_data ---" << endl;
   pet1.print_all_data();
   pet2.print_all_data();
   pet3.print_all_data();

   cout << endl;
} // end main
