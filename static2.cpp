//Program for Static Data members in C++
// For CSE-3 Class on 18.07.2025
#include<iostream>
using namespace std;
class base{
	public: int x;
	static int y;

};
int base::y;
int main()
{
	  //Declaration of Object 1 here 
	  base b1;
	  b1.x=10; //normal variable x in b1 object is given a value
	  //b1.y=30; // static variable y is given a value 
	   //        method2:
	    base::y=32;
	  
	  //Declaration of Object 2 here 
	  base b2;
	  b2.x=20;//normal variable x in b2 object is given a value
	  base::y=40; //static varaiable y is given a value
	  cout<<"b1.x= "<<b1.x <<endl;
	  cout<<"b2.x= "<<b2.x<<endl;
	  cout<<"Static variable y in b1= "<<b1.y<<endl;
	  cout<<"Static variable y in b2= "<<b2.y<<endl;
	  return 0; 
}
