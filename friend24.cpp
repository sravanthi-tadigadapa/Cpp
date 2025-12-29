#include<iostream>
using namespace std;

class myclass{ int a,b;
public: 
	friend int sum(myclass x);
	void set_ab(int i,int j);
};
void myclass::set_ab(int i,int j)
{
	a=i;
	b=j;
}
//Note : sum() is not a member function of any class
int sum(myclass x)
{
	/*Because sum() is a friend of myclass, it can directly
	access the variables 'a' and 'b'.*/
	return x.a+x.b;
}
int main()
{
	myclass obj1;
	obj1.set_ab(3,4);
	cout<<"sum of the numbers is : "<<sum(obj1)<<endl;
	return 0;
}
