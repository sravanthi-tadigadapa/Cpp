#include<iostream>
using namespace std;
class one {
public:
    // Base class versions
        void first() {     cout << "in Base class " << endl; }
		void print() {     cout << "Base class print" << endl;   }

    // For polymorphism example
    virtual void vfunc() {        cout << "Base class virtual function" << endl;    }
};

class two : public one {
public:
    // These hide base class versions
    void first() {       cout << "in Derived class " << endl;   }
    void print() {       cout << "Derived class print" << endl;  }

    // This overrides the base virtual function
    void vfunc()  {        cout << "Derived class virtual function" << endl;    }
};

int main() {
    two obj;
    cout << "=== Case 1: Normal calls (function hiding) ===" << endl;
    obj.first();   // derived version
    obj.print();   // derived version

    cout << "\n=== Case 2: Explicitly calling base class functions ===" << endl;
    obj.one::first();   // base version
    obj.one::print();   // base version

    cout << "\n=== Case 3: Using virtual functions (runtime polymorphism) ===" << endl;
    one* basePtr = new two();   // base pointer to derived object
   
    basePtr->first();
    basePtr->print();
    basePtr->vfunc();           // derived version called due to 'virtual'

    delete basePtr;
    return 0;
}

