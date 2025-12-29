//FRIEND FUNCTION usage in C++- Example 2 
//Declaration inside .........Definition outside .....Class Object as input parameter
#include<iostream>
using namespace std;
class robo
{
	  int x,y;
	  public: robo()
	  {
	  	 x=10;
	  	 y=20;
	  }
	  friend void outsider(robo obj);
	  };
void outsider(robo obj)
{
	 cout<<"you are inside outsider function..." <<endl;
	 cout<<"x= "<<obj.x<<endl;
	 cout<<" y= "<<obj.y<<endl;
}
int main()
{
	robo object1;
	outsider(object1); 
	return 0;
}
