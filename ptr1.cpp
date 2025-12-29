#include<iostream>
using namespace std;
class base
{public : int x; 
      base() { x=100; }
      virtual void show()
	  {
	  	 cout<<" in base class ..."<<endl;
	  	 cout<<"x = "<<x<<endl;
	  };
	
};
class derived : public base 
{
	public: int y;
    derived() {  y=234;	}
	void show()
	{
		 cout<<"base class x = "<<x<<endl;
		 cout<<"derived class y = "<<y<<endl;
		 
	}
};
int main()
{
	  derived d,*ptr;
	  ptr=&d;
	  
	  base b,*pr;
	  pr=&b;
	  pr->show();
	  pr->x=666;
	  pr->show();
	  ptr->show();
	  
	  return 0; 
}
