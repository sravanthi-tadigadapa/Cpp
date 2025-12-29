#include<iostream>
using namespace std;
class base { public: 
                void print()
			    {  cout<<"Print function in base class..."<<endl;}
	           virtual void display()=0;
			   			   //{ cout<<"Display function base class"<<endl;  }
};

class derived: public base {
	
	           public: 
			   void print() {  cout<<"Print function in derived class----"<<endl;}
	          void display() { cout<<"Display function in derived class"<<endl;  }
};
//function overriding
int main()
{
     base *ptr;
     derived obj;
     ptr=&obj;
	 ptr->display();
	 ptr->print();
	 delete ptr;
	 
	return 0; 
}
