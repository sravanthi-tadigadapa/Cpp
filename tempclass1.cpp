#include <iostream>
using namespace std;

template <typename T>
class MyClass {
    T data;
public:
    MyClass(T d) { data = d; }
    void display() { cout << data << endl; }
};

int main() {
    MyClass<int> obj1(100);
    MyClass<double> obj2(99.99);
    MyClass<char> obj3('A');

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
