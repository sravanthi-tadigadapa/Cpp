#include<iostream>
using namespace std;
class base
{public: int a,b;
base() { a=10;b=20;}
        void print(){ cout<<"Base class print function"<<endl;	}
        void display() {cout<<"Base class display function"<<endl;		}
	     
};
class derived :public base {
	
	public: void print() { cout<<"Derived  class print function"<<endl;	}
        void display() {cout<<"Derived  class display function"<<endl;		}
	
};
int main()
{
	  base *ptr;
	  derived obj;
	  ptr=new base();
	  
	  ptr->print();
	   ptr->display();
	  cout<<"a = "<<ptr->a<<" b= "<<ptr->b<<endl;
	  delete ptr;
	  return 0; 
}
