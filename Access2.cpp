//Access specifiers in C++ - Second program 
#include<iostream>
using namespace std; 
class first{
             int a=25;
	    public : void display()
	             {  cout<<"Display number is : "<<a<<endl;
				 }
};
int main()
{     
	  first one;
	  one.display();
	  
	  
	  return 0; 
}
