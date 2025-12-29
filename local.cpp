#include <iostream> 
using namespace std; 
int x=100;// global variable 
int main() 
{
	  int x=10; // local variable
	  	x=20;
	  	cout<<"Value of x is : "<<x<<endl;
	    cout <<"Local variable is : "<< x <<endl;
	  cout <<"Global variable is : "<<::x << endl;
	  
	  return 0; 
}
