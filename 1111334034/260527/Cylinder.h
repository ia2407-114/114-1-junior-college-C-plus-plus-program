#ifndef CYLINDER_H
#define CYLINDER_H
#include "Shap.h"

class Cylinder : public Shap {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h);
    double Volume() const override;
};

#endif
