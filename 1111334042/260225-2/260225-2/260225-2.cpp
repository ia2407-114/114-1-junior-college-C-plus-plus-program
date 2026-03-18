#define _CRT_SECURE_NO_WARNINGS
// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>

          
struct student {
    int id;
    char name[20];
    int computer, math;
    double avg;
};

int main(void)
{
    FILE* cfPtr; 

    
    if ((cfPtr = fopen("accounts.dat", "wb")) == NULL) {
        puts("File could not be opened.");
    }
    else {
          
        struct student blankClient = { 0, "", 0, 0, 0.0 };

                                  
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(struct student), 1, cfPtr);
        }

        fclose(cfPtr); 
    }
}


/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
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
 *************************************************************************/
