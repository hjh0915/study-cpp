#include <iostream>
#include "calculate.h"

using namespace std;

int main() {
    double r = 1.0, area = 0.0;
    area = circularArea(r);

    cout << "半径：" << r << "，面积：" << area << endl;
    
    return 0;
}