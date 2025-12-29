#include<iostream>
//for cse-3 class
using namespace std;
class sample1{
	private : static int s;
	public : void count();
};
int sample1::s=0;
void sample1::count()
{
	 cout<<"Before s++, value of s is : "<<s<<endl;
	 s++;
	 cout<<" s = "<<s<<endl;
}
int main()
{
	sample1 obj1,obj2,obj3;
	obj1.count();
	obj2.count();
	obj3.count();
	//after execution, you can observe the variation in variable 's' defined in class
}
