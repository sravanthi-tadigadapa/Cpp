#include<iostream>
using namespace std;
class testing
{
	  int a; 
	  public: 
	  testing()
	  {
	  	 a=0;
	  }
	  void operator ++(){ ++a;
	  }
	  void operator ++(int){ ++a;
	  }
	  void operator --(){ --a;
	  }
	  void display()
	  {
	  	 cout<<" a= "<<a<<endl;
	  }
};
int main()
{
	  testing obj1;
	  obj1.display(); 
	  ++obj1;
	  ++obj1;++obj1;
	  obj1.display();
	  --obj1;
	  obj1.display();
	  obj1++;
	  obj1.display();
	  
}
