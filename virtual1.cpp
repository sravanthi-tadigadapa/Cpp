#include<iostream>
using namespace std;
class shape {
	           public : int a,b; 
	           shape() { a=2;b=7; }
	           void print() { cout<<"this is second function in base class "<<endl;}
	           virtual void display()=0;
			   

};
class square: public shape { public: void display()
                                  { cout<< " Area of the square = "<<a*a<<endl;
	   
                                     }
	 
};
class rectangle : public shape {
	public: void display()
                                  { cout<< " Area of the rectangle  = "<<a*b<<endl;
	   
                                     }
};
int main()
{
	
	return 0; 
}
