//Declaring static data function in c++
// CSE-3 on 18.07.2025 
#include<iostream>
using namespace std;
//#inlcude<cstring>
class base{
public:  int x; 
         static int y; 	
         void printx() { cout<<" x value here is : "<<x<<endl;
		 }
         //Now statid member function will be introduced 
         static void printy()
         {
         	 cout<< "y value here is : "<<y<<endl;
         	 
		 }
};
int base::y;
int main()
{
	  base b1;
	  b1.x=10;
	  base::y=30;
	  
	  base b2;
	b2.x=20;
	base::y=40;
	b1.printx();
	b1.printy();
	b2.printx();
	b2.printy();  // base::printy();
	  
	  return 0; 
}
