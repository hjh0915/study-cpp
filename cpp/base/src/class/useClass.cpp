#include <iostream>

using namespace std;

class Students {
    private:
        int num;
        int score;
    
    public:
        void setdata() {
            cin >> num;
            cin >> score;
        }
        void display() {
            cout << "num = " << num << endl;
            cout << "score = " << score << endl;
        }
};

Students s1, s2;

int main() {
    s1.setdata();
    s2.setdata();
    s1.display();
    s2.display();

    return 0;
}