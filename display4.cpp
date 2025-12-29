// static members program 2  for CSE-3
//In this program we will identify the difference b/w static and non-static variable
#include<iostream>
using namespace std;
class sample2{
	private: int n;
	    static int s;
	public : void zero()
	      {
	      	n=0;
		  }
		  void increment()
		  {
		  	 n++;
		  	 s++;
		  	 cout<<"Value of Static s="<<s<<endl;
		  	 cout<<"Value of non-static n="<<n<<endl;
		   }
};
int sample2::s=190;
int main()
{
	sample2 obj1,obj2;
	obj1.zero() ;
	obj1.increment() ;
	obj2.zero() ;
	obj2.increment() ;
	
	
	return 0;
}
