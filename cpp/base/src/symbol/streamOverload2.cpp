#include <iostream>

using namespace std;

class Complex {
    private:
        double real;
        double imag;

    public:
        friend ostream& operator <<(ostream &op, Complex &c);
        friend istream& operator >>(istream &ip, Complex &c);
};

ostream& operator <<(ostream &op, Complex &c) {
    if (c.real>=0 && c.imag>=0) {
        op << "(" << c.real << "+" << c.imag << "i)" << endl;
    } else {
        op << "(" << c.real << "" << c.imag << "i)" << endl;
    }
    
    return op;
}   

istream& operator >>(istream &ip, Complex &c) {
    cout << "输入实部和虚部：";
    ip >> c.real >> c.imag;

    return ip;
}

int main() {
    Complex c1, c2;

    cin >> c1 >> c2;

    cout << "c1= " << c1 << endl;
    cout << "c2= " << c2 << endl;

    return 0;
}