// C++ Program to demonstrate the use of static data members
#include <iostream>
using namespace std;

// class definition
class A {
public:  
    // static data member here
    static int x;
    
};

// we cannot initialize the static data member inside the
// class due to class rules and the fact that we cannot
// assign it a value using constructor
int A::x=200 ;

int main()
{
    // accessing the static data member using scope
    // resultion operator
    cout << "Accessing static data member: " << A::x
         << endl;

    return 0;
}
