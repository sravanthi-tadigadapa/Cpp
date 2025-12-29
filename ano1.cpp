//declare an object without using the name of the object
// class_name().
#include<iostream>
using namespace std;
class anony{
		 public: anony(){ cout<<"Object Created...Constructor Called here "<<endl; }
	     void display() {   cout<<"Hi...Member function called ...."<<endl;}
};
int main()
{
	/*anony a;
	a.display();
	*/
	//anony();
	anony().display();
	
	return 0; 
}
