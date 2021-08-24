#include "add.h"
#include <iostream>

using namespace std;

int main() {
    cout << "sum: ";
    cout << add(2, 3);
    cout << "\n";

    cout << "sum: " << add(2, 3) << "\n";

    cout << "sum: " << cout.width(10) << add(2, 3) << endl;     //加间距：cout.width()

    return 0;
}