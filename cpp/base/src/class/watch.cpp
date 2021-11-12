#include <iostream>

using namespace std;

class Watch {
    public:
        void SetTime(int NewH, int NewM, int NewS);
        void ShowTime();

    private:
        int Hour, Min, Second;
};

void Watch::SetTime(int NewH, int NewM, int NewS) {
    Hour = NewH;
    Min = NewM;
    Second = NewS;
}

void Watch::ShowTime() {
    cout << Hour << ":" << Min << ":" << Second << endl;
}

Watch w1;

int main() {
    w1.SetTime(2, 5, 33);
    w1.ShowTime();

    return 0;
}