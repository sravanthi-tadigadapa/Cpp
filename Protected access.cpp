//Protected Access Specifier Example 
#include <iostream>
using namespace std; 
// num will be base class
class num{
	protected: int a,b;
};
//num2 will be the DERIVED CLASS 
class num2:num{
	public: int c; 
	
	void display()
	{
		  a=1;
		  b=2;
		  c=3;
		  cout<<" a = "<<a<<" b =  "<<b<<" c= "<<c<<endl;
	}
};
int main()
{
	  num2 one;
	  one.display();
	  return 0; 
}
