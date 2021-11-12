#include <iostream>

using namespace std;

class Time {
    public:
        int hour;
        int min;
        int sec;
};

int main() {
    Time t1;
    cin >> t1.hour;
    cin >> t1.min;
    cin >> t1.sec;

    cout << t1.hour << ":" << t1.min << ":" << t1.sec << endl;

    return 0;
}