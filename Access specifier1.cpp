//Access specifiers example 
#include <iostream>
using namespace std; 
class num{
	
	private: int a,b;
	       
	  public:   	void display()
	     	
	     	{
	     		   cout<<"Inside the Class function: a=  "<< a <<"  b=  " << b <<endl;
			 }
};
int main()
{
	num obj1;
	obj1.display();
	/*obj2;
	obj1.a=8;obj1.b=9;
	obj1.display();
	cout<<"Inside the main function....."	<<endl;
             	obj2.a= obj1.a *2;
              	obj2.b= obj1.b *3;
    obj2.display();
*/
	return 0; 
}
