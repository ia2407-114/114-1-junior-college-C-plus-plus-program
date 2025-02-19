// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>

// clientData structure definition            

typedef struct student {   //定義結構
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;
int main(void)
{
    FILE* cfPtr = NULL; // accounts.dat file pointer 1.建立檔案指標

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr, "accomts.dat", "wb")) != 0) {//2.開啟檔案
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information       
        stu blankClient = { 0, "", 0, 0 ,0.0 };

        // output 100 blank records to file                              
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(struct student), 1, cfPtr);//3.存取檔案
        }

        fclose(cfPtr); // fclose closes the file
    }
}

