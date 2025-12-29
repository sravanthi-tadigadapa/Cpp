#include<iostream>
using namespace std;
class A{
	
	public: class B{
		
		    int a;
		    public: void seta(int x) { a=x;}
		            void geta() { cout<<"a = "<<a<<endl;}
			};
};
int main()
{
	  A::B obj1;
	  obj1.seta(20);
	  obj1.geta();
	  
	  return 0;
}
