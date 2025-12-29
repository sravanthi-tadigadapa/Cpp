#include<iostream>
using namespace std;
class A{
	
	private:  class B{
		
		    int b;
		    public: void setb(int x) { b=x;}
		            void getb() { cout<<"b = "<<b<<endl;}
			};
	public: class C{
		             int c;
		             B objb;
		             public: void setc(int x) { c=x;}
		                      void getc() { cout<<"c = "<<c<<endl;  }
		                      void accessbv() { 
		                         cout<<"Inside Class C ..."<<endl;
		                         objb.setb(30);
		                         objb.getb();
							  }
	                };
	            };
int main()
{
	  A::C objc;
	  objc.accessbv();
	  
	  return 0;
}
