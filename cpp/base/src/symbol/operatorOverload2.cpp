#include <iostream>

using namespace std;

// 将“+”重载为适用于复数加法，重载函数不作为成员函数，
// 放在类外，作为Complex类的友元函数

class Complex {
    private:
        double real;
        double imag;

    public:
        Complex() {
            real = 0;
            imag = 0;
        }

        Complex(double r, double i) {
            real = r;
            imag = i;
        }

        friend Complex operator+(Complex &c1, Complex &c2);

        void display();
};

//加法重载
Complex operator+(Complex &c1, Complex &c2) {
    Complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;

    return Complex(c.real, c.imag);
}

void Complex :: display() {
    cout << "(" << real << ", " << imag << ")\n";
}

int main() {
    Complex c1(3, 4), c2(5, -10), c3;
    c3 = c1 + c2;
    cout << "c1="; c1.display();
    cout << "c2="; c2.display();
    cout << "c1+c2="; c3.display();

    return 0;
}