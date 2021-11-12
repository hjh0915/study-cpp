#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        int num;
        string name;
        char sex;
    
    public:
        Student(int n, string name, char s) {
            num = n;
            name = name;
            sex = s;

            cout << num <<"调用构造函数" << endl;
        }

        // 析构函数     后构造的先析构（栈）
        ~Student() {
            cout << num << "调用析构函数" << endl;
        }

        void display() {
            cout << "编号:" << num << endl;
            cout << "姓名:" << name << endl;
            cout << "性别：" << sex << endl;
        }
};

int main() {
    Student s1(1, "hjh", 'f');
    s1.display();

    Student s2(2, "aaa", 'm');
    s2.display();

    return 0;
}