#include <iostream>

using namespace std;

class Student {
    private:
        int num;
        int score;
    
    public:
        void setdata() {
            cin >> num;
            cin >> score;
        }
        void display();
};

// 在类体外定义成员函数
void Student::display() {
    cout << "num = " << num << endl;
    cout << "score = " << score << endl;
}

Student s1, s2;

int main() {
    s1.setdata();
    s2.setdata();
    s1.display();
    s2.display();

    return 0;
}