#include<iostream>
using namespace std;
class A 
{
	  int a;
	  private: class B
	  {
	  	 int b;
	  	 public: void setb(int x) { b=x;	   }
	  	         void getb() { cout<<"Inside B Class, b = "	<<b<<endl;	   }
	  	         
	  };
	  public: 
	          void seta(int x) { a=x;	   }
	  	         void geta() { cout<<"Inside A Class, a = "	<<a<<endl;	   }
	  	        void createb()
				  {
				  	B objb;
	  	         objb.setb(30);
	             objb.getb();
	              }
	              class C
	                {
	  	                 int c;
	  	                 public: void setc(int x) { c=x;	   }
	  	                          void getc() { cout<<"Inside C Class, c = "	<<c<<endl;	   }
	  	         
	                };
	  
};
int main()
{
	  A obja;
	  obja.seta(20);
	  obja.geta();
	   obja.createb();
	  /*A::B objb;
	   objb.setb(40);
	   objb.getb();
	   */  //Execute by including the code and see the result 
	   A::C objc;
	   objc.setc(50);
	   objc.getc();
	  
}
