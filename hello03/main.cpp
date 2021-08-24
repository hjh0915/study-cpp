#include <iostream>

using namespace std;

// 声明一个add函数
int add(int x, int y);

int main() {
    cout << "sum: ";
    cout << add(2, 3);
    cout << "\n";

    cout << "sum: " << add(2, 3) << "\n";

    cout << "sum: " << cout.width(10) << add(2, 3) << endl;     //加间距：cout.width()

    return 0;
}