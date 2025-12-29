#include<iostream>
using namespace std;
class unary{
	 int a; 
	 public: 
	 unary() {  a=0; }
	 unary(int x) { a=x;}
	 
	 void print() { cout<<"a = " <<a<< endl; }
	 // we need to write the code here for overloading of ++ or -- 
	 friend void operator ++(unary &object){
	 	  ++object.a;
	 }
};
nt main()
{
	unary first(23);
	first.print();
	++first;
	first.print();
	return 0; 
}
