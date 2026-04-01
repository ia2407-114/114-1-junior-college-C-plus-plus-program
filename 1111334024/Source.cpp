// Fig. 3.5: fig03_05.cpp
// Define class GradeBook that contains a courseName data member
// and member functions to set and get its value; 
// Create and manipulate a GradeBook object with these functions.
    
#include <iostream>
#include <string>
#include "pet.h"

using namespace std;

int main() {
    // 透過建構元建立第一隻寵物物件
    cout << "--- Creating first pet ---" << endl;
    Pet pet1("Buddy", 3);
    pet1.displayMessage();

    cout << "\n--- Creating second pet ---" << endl;
    // 透過建構元建立第二隻寵物物件
    Pet pet2("bob", 0);

    pet2.displayMessage();

    cout << "\n--- Program ending soon ---" << endl;

    return 0;
    // 當 main 結束時，區域變數 pet1, pet2 會超出範圍，自動觸發解構元
}

/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
