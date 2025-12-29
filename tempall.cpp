#include <iostream>
#include <string>
using namespace std;

// 1. Function Template: Find Maximum of two values
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

// 2. Class Template: Generic container
template <typename T>
class Container {
    T data;
public:
    Container(T d) : data(d) {}
    void display() {
        cout << "Container holds: " << data << endl;
    }
};

// 3. Class Template with Multiple Types
template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void display() {
        cout << "Pair: " << first << ", " << second << endl;
    }
};
int main() {
    // Function Template
    cout << "Function Template Example:" << endl;
    cout << "Max of 10 and 20: " << getMax(10, 20) << endl;
    cout << "Max of 5.5 and 2.3: " << getMax(5.5, 2.3) << endl;
    cout << "Max of 'a' and 'z': " << getMax('a', 'z') << endl;
    cout << "---------------------------" << endl;

    // Class Template
    cout << "Class Template Example:" << endl;
    Container<int> intContainer(100);
    Container<string> stringContainer("Hello Templates");
    intContainer.display();
    stringContainer.display();
    cout << "---------------------------" << endl;

    // Class Template with Multiple Types
    cout << "Multiple Type Template Example:" << endl;
    Pair<int, double> p1(10, 5.5);
    Pair<char, string> p2('A', "World");
    p1.display();
    p2.display();

    return 0;
}
