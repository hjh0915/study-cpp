#include <cmath>
#include "calculate.h"

double Circle::area(double r) {
    const double pi = 4.0 * atan(1.0);
    return pi * r * r;
};