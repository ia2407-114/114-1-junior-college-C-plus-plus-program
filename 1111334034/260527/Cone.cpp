#include "Cone.h"

Cone::Cone(double r, double h) : radius(r), height(h) {}

double Cone::Volume() const {
    return (1.0/3.0) * 3.14159 * radius * radius * height;
}
