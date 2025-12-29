#include <iostream>
using namespace std;

class Aditya {
public:
    int a, b;
    Aditya(int x = 5, int y = 10) {
        a = x;
        b = y;
    }
};

int main() {
    Aditya obj1;       // a=5, b=10
    Aditya obj2(20);   // a=20, b=10
    Aditya obj3(30,40);// a=30, b=40
    cout << obj1.a << " " << obj2.a << " " << obj3.a;
    return 0;
}

