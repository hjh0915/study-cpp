#include <iostream>

using namespace std;

class Cube {
    private:
        int length;
        int width;
        int height;

    public:
        Cube(int len, int w, int h);    //带参数的构造函数(列表化可用，但是有点冗余)
        // Cube(int len=10, int w=10, int h=10);    //默认参数的构造函数，在main中的调用可以覆盖参数（1个或多个）
        Cube(); //重载
        int Volume();
};

// 构造函数
Cube::Cube(int len, int w, int h) {
    length = len;
    width = w;
    height = h;
}

// 重载
Cube::Cube() {
    length = 10;
    width = 20;
    height = 15;
}

int Cube::Volume() {
    return (length * width * height);
}

int main() {
    Cube c1(12, 25, 30);
    cout << "长方体1的体积为：" << c1.Volume() << endl;

    Cube c2(15, 30, 21);
    cout << "长方体2的体积为：" << c2.Volume() << endl;

    Cube c3;
    cout << "长方体3的体积为：" << c3.Volume() << endl;

    return 0;
}