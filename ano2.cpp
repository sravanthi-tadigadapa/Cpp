//Passing anonymous object to a function 
#include<iostream>
using namespace std;


class CSE{
	 int a; 
	 public: CSE(int x) { a=x;}
	        void geta() { cout<<"Value : a= "<<a<<endl;}
	
};
void print(CSE obj)
{ obj.geta();}
int main()
{
	/*CSE obj;
	obj.seta(100);
	print(obj);*/ // normal creation of set and get functions 
	
	/*CSE obj(100);
	print(obj);               // using the constrcutor
	*/
	print(CSE(100));  // using anonymous object 
	return 0; 
}
