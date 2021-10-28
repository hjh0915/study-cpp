#include <iostream>

using namespace std;

class Cube {
    private:
        int length;
        int width;
        int height;

    public:
        Cube(int len=12, int w=12, int h=15);    //带默认参数的构造函数
        // Cube(); //重载
        int Area();
        int Volume();
};

Cube :: Cube(int len, int w, int h) {
    length = len;
    width = w;
    height = h;
}

// // 重载
// Cube::Cube() {
//     length = 10;
//     width = 20;
//     height = 15;
// }

int Cube :: Area() {
    return (length * width + length * height + width * height) * 2;
}

int Cube :: Volume() {
    return (length * width * height);
}

int main() {
    Cube c;
    cout << "长方体2的表面积为：" << c.Area() << endl;
    cout << "长方体2的体积为：" << c.Volume() << endl;
    
    Cube c1(12, 25, 30);    //覆盖默认参数
    cout << "长方体1的表面积为：" << c1.Area() << endl;
    cout << "长方体1的体积为：" << c1.Volume() << endl;

    return 0;
}