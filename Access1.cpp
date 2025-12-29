// Access specifieres in C++
#include<iostream>
using namespace std;
class class3{
	private : 
		int a;
	public:
			void display(int x)
			{
				 cout<<"display function..."<<endl;
				 a=++x;
				 cout<<" Value of Private variable a: "<<a<<endl;
			}
};
int main()
{
	class3 ob;
	int b;
	cout<<"enter a value for ob.a: "<<endl;
	cin>> b;
	ob.display(b);
	
		return 0; 
}
