#include <iostream>
using namespace std;
template <class T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T getValue() { return value; }
};

int main() {
    Box<int> intBox(10);
    Box<double> doubleBox(5.5);
    cout << intBox.getValue() << endl;
    cout << doubleBox.getValue() << endl;
    return 0;
}

