#include <iostream>
#include "Cone.h"
#include "Ball.h"
#include "Cylinder.h"
using namespace std;

int main() {
    Shap *a1;

    a1 = new Cone(3, 5);
    cout << a1->Volume() << endl;

    a1 = new Ball(3);
    cout << a1->Volume() << endl;

    a1 = new Cylinder(3, 5);
    cout << a1->Volume() << endl;

    return 0;
}
