#ifndef CONE_H
#define CONE_H
#include "Shap.h"

class Cone : public Shap {
private:
    double radius;
    double height;

public:
    Cone(double r, double h);
    double Volume() const override;
};

#endif
