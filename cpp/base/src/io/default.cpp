#include <iostream>

using namespace std;

void displayStars(int cols=10, int rows=1);

int main() {
    displayStars();
    cout << endl;
    displayStars(5);
    cout << endl;
    displayStars(7, 3);
    cout << endl; 

    return 0;
}

void displayStars(int cols, int rows) {
    for(int down=0; down<rows; down++) {
        for(int across=0; across<cols; across++) {
            cout << "*";
        }
        cout << endl;
    }
}