//Example of a CONSTRUCTOR in C++
//for CSE-3
//to be written only in public
//No return type for a constructor
//Automatically called immediately after Object is created
#include <iostream>
using namespace std;
class car{
	int sno;
	public:
		car(int val){ sno=val;
		cout<<"Value is assigned successfully ........."<<endl;
		}
        void printno(){
		cout<<"Sno is : "<<sno<<endl;}
};

int main()
{
	  car obj(10);
	  obj.printno();
	  
	  return 0; 
	  
}
