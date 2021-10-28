#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string name;
        int num;
        char sex;
    
    public:
        Student(string Nname, int Nnum, char Nsex) {
            name = Nname;
            num = Nnum;
            sex = Nsex;

            cout << name << "调用构造函数" << endl;
        }

        //析构函数
        ~Student () {
            cout << name << "调用析构函数" << endl;
        }

        void display() {
            cout << "姓名：" << name << endl;
            cout << "学号：" << num << endl;
            cout << "性别：" << sex << endl;
        }
};

int main() {
    Student s1("古月", 57, 'f');
    s1.display();

    Student s2("木易", 58, 'f');
    s2.display();

    return 0;
}