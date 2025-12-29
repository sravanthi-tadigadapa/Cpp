#include<iostream>
using namespace std;
class base{ public: int a,b;
base() { a=23;b=34;}
	public: virtual void print()
	             { cout<<"Base class print "<<endl;	}
	        virtual void display() { cout<<"Base class display"<<endl; }
	        virtual void results()=0;
};
class derived : public base{
	public: void print() { cout<<"overriding ....Derived  class print "<<endl;	}
	       void display() { cout<<"Derived class display"<<endl; }
	        void results() { cout<<"a = "<<a<<" b= "<<b<<endl; }
};
int main()
{    
	base *ptr;
	derived obj;
	ptr=new derived();
	ptr->print();
    ptr->display();
	ptr->results();
	delete ptr;
	return 0; 
}
