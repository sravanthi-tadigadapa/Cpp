#include<iostream>
using namespace std;
class base
{
	public: virtual void displayname()=0;
	         virtual void print()
	         {
	         	 cout<< "Hello ...from base class "<<endl;
			 }
			 void general()
			 {
			 	 cout<<"Introduction to virtual functions and abstract classes...."<<endl;
			 }
};
class dc1: public base
{
	void displayname() { cout<<" Name of the class : Dc1"<<endl;}
	virtual void print()
	         {
	         	 cout<< "Hello ...from derived class 1 "<<endl;
			 }
};
class dc2: public base
{
	public: void displayname() { cout<<" Name of the class : Dc2"<<endl;}
	void newfun2() { cout<<" new function in dc2..."<<endl;	}
	
};
int main()
{
	 dc2 *b;
	 dc1 d1;
	 dc2 d2;
	/* b=&d1;
	 b->displayname();
	 b->general();
	 b->print();*/
	 cout<<".............................."<<endl;
	 b=&d2;
	 b->displayname();
	 b->general();
	 b->print();
	 b->newfun2();
	 
}
