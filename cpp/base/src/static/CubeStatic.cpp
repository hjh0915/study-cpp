#include <iostream>

using namespace std;

class Cube {
    public:
        Cube(int len, int w);
        int Volume();

        static int height;

    private: 
        int length;
        int width;
};

// 构造函数
Cube::Cube(int len, int w) {
    length = len;
    width = w;
}

int Cube::Volume() {
    return (length * width * height);
}

int Cube :: height = 10;    //静态成员函数没有this指针

int main() {
    Cube c1(15, 20);
    cout << "长方体1的体积为：" << c1.Volume() << endl;

    Cube c2(20, 30);
    cout << "长方体2的体积为：" << c2.Volume() << endl;

    return 0;
}