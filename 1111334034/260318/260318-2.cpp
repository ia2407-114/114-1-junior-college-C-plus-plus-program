// Fig. 15.10: fig15_10.cpp
// Overloaded functions.
#include <iostream>
using namespace std;

// function square for int values
int volume(int x)
{
    cout << "cube volume " << x << " is ";
    return x * x * x;
}

int volume(int x, int y)
{
    cout << "cylinder volume " << x << "," << y << " is ";
    return 3.14 * x * x * y;
}

// function square for double values
int volume(int x, int y, int z)
{
    cout << "rect volume " << x << "," << y << "," << z << " is ";
    return x * y * z;
}

int main()
{
    cout << volume(7); // calls int version
    cout << endl;
    cout << volume(7, 2); // calls int version
    cout << endl;
    cout << volume(5, 6, 7); // calls double version
    cout << endl;
}