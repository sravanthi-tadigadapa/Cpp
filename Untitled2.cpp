#include <iostream>
using namespace std;

class Aditya {
public:
    int a, b;

    // Constructor
    Aditya(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Aditya obj1(10, 20); // Constructor is automatically called
    obj1.display();
    return 0;
}

