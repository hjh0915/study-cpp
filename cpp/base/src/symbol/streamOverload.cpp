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

        friend ostream& operator << (ostream&, Complex&);

        Complex operator+ (Complex &c2);

        void display();
};

//加法重载为成员函数
Complex Complex::operator+(Complex &c2) {
    return Complex(real + c2.real, imag + c2.imag);
}

// << 重载为友元函数
ostream& operator << (ostream &op, Complex &c) {
    //如果这里有负数的话需要使用分支判断处理
    if (c.real >= 0 && c.imag >= 0) {
        op << "(" << c.real << " + " << c.imag << "i)" << endl;
    } else {
        op << "(" << c.real << "" << c.imag << "i)" << endl;
    }
    
    return op;
}

int main() {
    Complex c1(2, 4), c2(6, -10), c3;
    c3 = c1 + c2;
    cout << c3 << endl;

    return 0;
}