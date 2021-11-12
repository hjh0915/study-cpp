#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class String {
    private:
        char *p;

    public:
        String() {
            p = NULL;
        }

        friend bool operator>(String &s1, String &s2);
        
        String(char *str);
        void display();
};

bool operator>(String &s1, String &s2) {
    if (strcmp(s1.p, s2.p) > 0) {
        return true;
    } else {
        return false;
    }
}

String :: String(char *str) {
    p = str;
}

void String :: display() {
    cout << p;
}

int main() {
    String s1("Hello"), s2("world");
    s1.display();
    cout << endl;
    s2.display();
    cout << endl;

    cout << (s1 > s2) << endl;

    return 0;
}