#include<iostream>
using namespace std;

/* For a Protected member 
							    Public derivation         Private derivation            Protected derivation
         1. Private member      not inherited               Not inherited                Not inherited     
         2. Protected              protected                 Private                       Protected
         3. Public                  public                   private                       Protected 
         */
         #include<iostream>
class Base {
protected: 
    int a; // Protected: accessible in derived classes
private: 
    int b; // Private: not accessible in derived classes
};

class Derived : public Base {
public:
    void setA(int val) {
        a = val; // Set the inherited protected variable
    }

    void printA() {
        cout << "Base class protected integer value: " << a << endl;
    }
};

int main() {
    Derived d;
    d.setA(42);   // Set the value of 'a'
    d.printA();   // Access and print the value of 'a' via a public function

    // Direct access like d.a is NOT allowed because 'a' is protected.
    // cout << d.a << endl; // ? This would give a compile-time error

    return 0;
}

         

