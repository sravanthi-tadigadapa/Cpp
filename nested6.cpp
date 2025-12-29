#include<iostream>
using namespace std;
class outer{
	
	private: class inner1{ int v1;
	                       public: void setv1(int x) { v1=x; }
		                            void getv1() {cout<<"Inner1 class ==>v1= "<<v1<<endl;}
		
		
	};// end of inner1 class definition
	public: class inner2{ int v2; inner1 i1;
	                       public: void setv2(int x) { v2=x; i1.setv1(30); }
		                            void getv2() {cout<<"Inner2 class ==>v2= "<<v2<<endl;
									          i1.getv1();}	
		
	}; // end of inner2 class definition
};//end of outer class definition
int main()
{
	   outer::inner2 o1;
	   o1.setv2(20);
	   o1.getv2();
	     
	   return 0; 
}
