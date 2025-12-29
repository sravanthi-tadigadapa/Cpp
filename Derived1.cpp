#include<iostream>
using namespace std;
class Base {
	public: Base() { cout<<"Base class activated.........."<<endl; } //default constructor here

protected:
    int protected_data; // Accessible within Base and its derived classes
    void protected_function(); // Accessible within Base and its derived classes
};
void Base::protected_function(){ cout<<"Now you are accessing Base Class Protected function ....protected_data= "<<protected_data   <<endl;
}

class Derived : public Base {
	                            public : Derived(){ cout<<"Derived Class object is created.........."<<endl; } //default constructor here
public:
    void access_protected() {
        protected_data = 201; // Accessible in Derived class
        protected_function(); // Accessible in Derived class
    }
};

int main() {
    //Base b_obj;
    // b_obj.protected_data = 20; // Error: protected_data is not accessible here
    // b_obj.protected_function(); // Error: protected_function is not accessible here

    Derived d_obj;
    
    d_obj.access_protected(); // This calls a public method that accesses protected members
    return 0;
}
