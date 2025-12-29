//member functions declaration outside the class with :: operator 
#include <iostream>
//In this program i am not using..............using namespace std;
class MyClass {
public:
    void greet();
    int square(int x);
};

void MyClass::greet()    {
                          std::cout << "Welcome to C++!" << std::endl;
                        }

int MyClass::square(int x) {
                          return x * x;
                           }
int main() {
    MyClass obj;
    obj.greet();
    std::cout << "Square of 5 is: " << obj.square(5) << std::endl;
    return 0;
}

