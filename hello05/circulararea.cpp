#include <cmath>

double circularArea(double r) {
    // const double pi = 3.1415926536;

    const double pi = 4.0 * atan(1.0);
    return pi * r * r;
}