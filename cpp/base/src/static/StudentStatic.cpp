#include <iostream>

using namespace std;

class Student {
    private:
        int num;
        int age;
        float score;

    public:
        Student(int n, int a, float s) : num(n), age(a), score(s) {};
        void total();
        static float sum;
        static int count;
        static float average();
};

void Student :: total() {
    sum += score;
}

float Student :: average() {
    return (sum / count);
}

float Student :: sum = 0;
int Student :: count = 3;

int main() {
    Student s[3] = {
        Student(1001, 18, 70),
        Student(1002, 19, 78),
        Student(1003, 20, 98)
    };
    
    int n = 3;

    for (int i=0; i<n; i++) {
        s[i].total();
    }

    cout << "总人数为：" << n << "\t" << "平均成绩为：" << Student :: average() << endl;
    cout << "总人数为：" << n << "\t" << "平均成绩为：" << s[0].average() << endl;
}