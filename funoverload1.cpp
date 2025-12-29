#include <iostream>
using namespace std;

class Billgates {
public:
    void display() { cout << "No arguments\n"; }
    void display(int x) { cout << "Integer: " << x << endl; }
    void display(double y) { cout << "Double: " << y << endl; }
};

int main() {
    Billgates obj1;
    obj1.display();
    obj1.display(5);
    obj1.display(3.14); return 0; 
                 }

