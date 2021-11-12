#include <iostream>
#include <cmath>

using namespace std;

class Point {
    private:
        double x, y;

    public:
        Point() {
            x = 0;
            y = 0;
        }

        Point(double a, double b){
            x = a;
            y = b;
        }

        Point operator+ (Point pt2);    //加法的重载

        double operator^ (Point pt2);   //求勾股定理的重载

        void display();     //输出函数
};

//加法的重载
Point Point :: operator+ (Point pt2) {
    Point p;
    p.x = x + pt2.x;
    p.y = y + pt2.y;

    return p;
}

//求勾股定理的重载
double Point :: operator^ (Point pt2) {

    return sqrt((x-pt2.x) * (x-pt2.x) + (y-pt2.y) * (y-pt2.y));
}

void Point :: display() {
    cout << "(" << x << ", " << y << ")\n";
}

int main() {
    Point p1(1.2, -3.5), p2(-1.5, 6);
    Point p_sum;
    double p_mul;

    p_sum = p1 + p2;
    p_mul = p1.operator^(p2);
    
    cout << "(1.2, -3.5) + (-1.5, 6) = "; p_sum.display();
    cout <<  "(1.2, -3.5) ^ (-1.5, 6) = " << p_mul << endl;
}