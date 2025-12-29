//Example2 of a CONSTRUCTOR in C++
//for CSE-3
//to be written only in public
//No return type for a constructor
//Automatically called immediately after Object is created
#include <iostream>
using namespace std;
class construct{
	public : int a,b;
	//default constructor
	construct()
	{
		 a=10;
		 b=20;
		 cout<<"a = "<<a<<endl<<"b= "<<b<<endl;
	}
};

int main()
{
	  //default constructor called automatically now
  //when the object is created.
  construct c;
  
    
	  return 0; 
	  
}
