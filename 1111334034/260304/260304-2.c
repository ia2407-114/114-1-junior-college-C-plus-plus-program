// Fig. 11.14: fig11_14.c
// Reading a random-access file sequentially
#include <stdio.h>

// clientData structure definition
struct student
{
	int id;				// 4位元
	char name[20];		// 1*20位元
	int computer, math; // 4位元 * 2
	double avg;			// 8位元
};

int main(void)
{
	FILE *cfPtr; // accounts.dat file pointer

	// fopen opens the file; exits if file cannot be opened
	if ((cfPtr = fopen("accounts.dat", "rb")) == NULL)
	{
		puts("File could not be opened.");
	}
	else
	{
		printf("%-6s%-16s%-11s%-11s%10s\n", "ID", "Name",
			   "Computer", "Math", "Avg");

		// read all records from file (until eof)
		while (!feof(cfPtr))
		{
			// create clientData with default information
			struct student stu = {0, "", 0, 0, 0.0};

			int result = fread(&stu, sizeof(struct student), 1, cfPtr);

			// display record
			if (result != 0 && stu.id != 0)
			{
				printf("%-6d%-16s%-11d%-11d%10.2f\n",
					   stu.id, stu.name, stu.computer, stu.math, stu.avg);
			}
		}

		fclose(cfPtr); // fclose closes the file
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
