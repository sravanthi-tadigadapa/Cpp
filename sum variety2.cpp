//using default arguments in  c++
//Example program 1
#include <iostream>
using namespace std;
int add(int a=10,int b=20);
int main()
{
	int x,y;
	x=30;
	y=40;
	add(x,y);
	add(x);
	add();
	
	// default values will always be overriden by the actual parameters 
	return 0;
}
int add(int a,int b)
{
	 cout<<"The sum is : "<< a+b<< endl;
}
