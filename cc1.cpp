#include <iostream>
using namespace std;

class Aditya {
public:
    int a;
    Aditya(int x) { a = x; } // Normal constructor

    // Copy constructor
    Aditya(Aditya &obj) {
        a = obj.a;
    }
};

int main() {
    Aditya obj1(10);   // calls normal constructor
    Aditya obj2 = obj1; // calls copy constructor
    cout << obj2.a;
    return 0;
}

