#include<iostream>
using namespace std;
class shape{
	protected: int b,h;
	public: void getvalues()
	{
		 cout<<"Enter values of b and h : "<<endl;
		 cin>>b>>h;
		 
	}
//	virtual void printvalues()=0;
virtual void printvalues()
{
	 cout<<"printing inside base class : b= "<<b<<" h= "<<h<<endl<<"area=  "<<b*h<<endl;
}
	
};
class rectangle: public shape{
	public: double area;
	void printvalues()
	{
		  cout<<"printing inside derived class..."<<endl;
		  cout<<" Area of rectangle = "<<b*h<<endl;
	}
	void separate() { cout<<"This is a separate function of derived class "<<endl; 	}
};
int main()
{
	rectangle r;
	shape *ptr;
	ptr=new rectangle(); 
	ptr->getvalues();
	ptr->printvalues();
    ptr->separate();//gives error message by compiler
	delete ptr;
	
	  return 0; 
}
