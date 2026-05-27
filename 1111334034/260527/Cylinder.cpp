#include "Cylinder.h"

Cylinder::Cylinder(double r, double h) : radius(r), height(h) {}

double Cylinder::Volume() const {
    return 3.14159 * radius * radius * height;
}
