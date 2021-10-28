#include <iostream>
#include <string>

using namespace std;

class Num {
    private:
        int x;
        int y;
    
    public:
        Num(int a, int b) {
            x = a;
            y = b;
            cout << "调用构造函数：" << "x=" << x << "y=" << y << endl;
        }

        ~Num() {
            cout << "调用析构函数：" << "x=" << x << "y=" << y << endl;
        }
};

Num n1(1, 2);

int main() {
    Num n2(2, 3);

    static Num n3(3, 4);

    return 0;
}