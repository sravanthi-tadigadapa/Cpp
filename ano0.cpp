#include<iostream>
using namespace std;
class A
{
	 int a;
	public: A() { cout<<"Constructor called ..."<<endl;}
	 ~A() { cout<<"Destructor called ..."<<endl;}
};
int main()
{
	  A();
	  A();
	 /* A a1;
	  
	  A a2;  */
	  // Dear students ! Find the difference between the two types of code here. 
}
