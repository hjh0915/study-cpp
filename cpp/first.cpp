#include <iostream>

using namespace std;

class Cube {
    private:
        int length;
        int width;
        int height;

    public:
        Cube(int len, int w, int h);    //带参数的构造函数
        int Area();
        int Volume();
};

Cube :: Cube(int len, int w, int h) {
    length = len;
    width = w;
    height = h;
}

int Cube :: Area() {
    return (length * width + length * height + width * height) * 2;
}

int Cube :: Volume() {
    return (length * width * height);
}

int main() {
    Cube c(3, 4, 5);
    cout << "长方体的表面积为：" << c.Area() << endl;
    cout << "长方体的体积为：" << c.Volume() << endl;

    return 0;
}