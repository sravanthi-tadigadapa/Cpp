//Accessing private data members of two classes 
#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public: A()
	{  cout<<"Enter a: "<<endl;
	cin>>a;
	}
	friend void print(A a1,B b1);
};
class B{
	int b;
	public: B()
	{  cout<<"Enter b: "<<endl;
	cin>>b;
	}
	friend void print(A a1,B b1);
};
void print(A a1,B b1)
	{
	 cout<<"a from Class A = "<<a1.a<<endl;
	 cout<<"b from Class B= "<<b1.b<<endl;
	 cout<<"sum of the numbers : "<<a1.a+b1.b <<endl;
	}
int main()
{
	A obja;
	B objb;
	print(obja,objb);
		
	return 0; 
}
