#include <iostream>
using namespace std;
int add(int a=2,int b=6,int c=12);
int main()
{
	int x,y,z;
	x=10;y=20;z=30;
	cout<<"Sum with 3 inputs : "<<add(x,y,z)<<endl;
	cout<<"Sum with 2 inputs only:"<<add(x,y)<<endl;
	cout <<"Sum with only 1 input: "<<add(x)<<endl;
	cout<<"Sum with no inputs: "<<add()<<endl;
		return 0; 
}
int add(int a,int b,int c)
{
	 return a+b+c;
}
