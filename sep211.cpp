#include<iostream>
using namespace std;
// demonstrating virtual destructors in c++
class Base{
	public: 
	virtual Base() { cout<<"Base class constructor called ..."<<endl;}
	virtual ~Base() { cout<<"Base class destructor called ..."<<endl; }
	   virtual void print() { cout<<"Base class print function"<<endl;	}
	   virtual void display() { cout<<"Base class display function"<<endl;   }
};
class Derived: public Base{
	public:
		Derived() { cout<<"Derived class constructor called ..."<<endl;}
	~Derived() { cout<<"Derived class destructor called ..."<<endl; }
		 void print() { cout<<"Derived class print function"<<endl;	}
	     void display() { cout<<"Derived class display function"<<endl;   }
};
int main()
{
    Base *ptr; // creating base class pointer 
	ptr=new Derived();
	/*ptr->print();
	ptr->display();*/
	delete ptr;
	
	return 0; 
}
