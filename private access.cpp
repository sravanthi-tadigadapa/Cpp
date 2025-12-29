//Access specifiers example 
#include <iostream>
using namespace std; 
class num{
	
	private: 
			int a,b;
	       
	  void display(int x,int y)
	     	    {
	     		a=x; b=y;
	     		
	     		cout<<"Inside the Class function: a=  "<< a <<"  b=  " << b <<endl;
			    }
	public: 
	 	void show(int x,int y)
	 	{
	 		display(x,y);
		 }
};
int main()
{
	num obj1;
    obj1.show(8,9);
	//cout<<"Now you are in Main function........trying to access/modify  the public variables"	<<endl;
    obj1.show(10,20);

	return 0; 
}
