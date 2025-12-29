#include<iostream>
using namespace std;
class first{
	public : int a=123;
	           void display(int x)
	           {
	           	    cout<<" Value inside the private function : "<<x<<endl;
			   }
			   
		
};
int main()
{
   first one;
   one.display(one.a);
   one.a=200;
   one.display(one.a);
}
