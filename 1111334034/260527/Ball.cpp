#include "Ball.h"

Ball::Ball(double r) : radius(r) {}

double Ball::Volume() const {
    return (4.0/3.0) * 3.14159 * radius * radius * radius;
}
