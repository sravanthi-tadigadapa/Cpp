#include<iostream>
using namespace std;
class A{
	
	   int a,b;
	   public: A() {a=0;b=0;}
	   A(int x,int y) { a=x;b=y;  }
	   A operator +( A&);
	   void show();
};
A A::operator +(A& obj)
{
	A third;
	third.a= a+ obj.a;
	third.b=b+obj.b;
	
	return third;
}
void A::show()
{
	  cout<<"a = "<<a<<" b= "<<b<<endl;
}

int main()
{
	A obj1(2,5);
	A obj2(3,6);
	A obj3=obj1+obj2;
	obj1.show();
	obj2.show();
	obj3.show();
	
	
	
	
	return 0; 
}
