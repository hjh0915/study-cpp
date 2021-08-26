#include <iostream>
#include "calculate.h"

using namespace std;

int main() {
    double r = 1.0, area = 0.0;
    Circle c;
    area = c.area(r);

    cout << "半径：" << r << "，面积：" << area << endl;
    
    return 0;
}