//second example program 
#include<iostream>
using namespace std;

class student{
	private: int rno,marks,total;
	          float avg;
	          char name[20];
	public: 
	// complete the function definitions
		     void getdata(); 
		     void processdata();
		     void putdata();
};
int main()
{	 student one;
      //Now here we need to call the functions by objects
      one.getdata();
      one.processdata();
      one.putdata();
	 return 0; 
}
