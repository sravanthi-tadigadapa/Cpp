#include<iostream>
using namespace std;
class one
{
	 public: virtual void first()
	 { cout<<"in Base class "<<endl;
	  }
	  void print()
	  { cout<<"Base class print"<<endl;
	  }
};
class two: public one
{
 public: void first()
	 { cout<<"in derived class "<<endl;
	  }	
	   void print()
	  { cout<<"Derived class print"<<endl;
	  }
};
int main()
{
	one obj1;
	two obj2;
	one *ptr;
    ptr=&obj1;
	ptr->first();
	ptr->print();
	ptr=&obj2;
	ptr->first();
	ptr->print();


	return 0;   
}
