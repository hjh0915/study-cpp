#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int intValue = 3928;
    float floatValue = 91.5;
    char cStringValue[] = "Hello World!";

    float a, b = 132.364f, b2 = 26.9f;
    a = b / b2;

    // 用setprecision操作符输出数的有效位数
    cout << setprecision(5) << a << endl;
    cout << setprecision(4) << a << endl;
    cout << setprecision(3) << a << endl;
    cout << a << endl;

    // 用setw操作符为输出数据项的指定宽度
    cout << "(" << setw(5) << intValue << ")" << endl;
    cout << "(" << setw(8) << floatValue << ")" << endl;
    cout << "(" << setw(20) << cStringValue << ")" << endl;


    // 输入，指定输入域宽
    char word[10];
    cin >> setw(10) >> word;
    cout << word << endl;

    // 输入法2
    cin.width(10);
    cin >> word;
    cout << word << endl;

    // 读取一行数据，getline()
    // 读取一个字符，get()
    int number;
    char ch;
    cout << "请输入一个整数：";
    cin >> number;
    cout << "请输入一个字符：";
    cin.ignore();
    cin.get(ch);

    return 0;
}