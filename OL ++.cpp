#include<iostream>
using namespace std;

class A {
private:
    int x;
public:
    A() { x = 0; }
    A(int x) { this->x = x; }
    
    void show();
    A operator +(const A &obj);

    // Prefix ++ and --
    void operator++() { x = x + 5; }
    void operator--() { x = x - 5; }

    // Postfix ++ and --
    void operator++(int) { x = x + 5; }  // int is just a dummy
    void operator--(int) { x = x - 5; }
};

void A::show() {
    cout << " x = " << x << endl;
}

A A::operator +(const A& object) {
    A temp;
    temp.x = x + object.x;
    return temp;
}

int main() {
    A obj1(10), obj2(25), obj3;

    obj1.show();
    obj2.show();

    obj3 = obj1 + obj2;
    obj3.show();

    ++obj3;   // prefix
    obj3.show();

    obj3++;   // postfix
    obj3.show();

    --obj3;   // prefix
    obj3.show();

    obj3--;   // postfix
    obj3.show();

    return 0;
}

