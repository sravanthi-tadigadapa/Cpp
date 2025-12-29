//Desctructor in C++
#include<iostream>
using namespace std;
class one{
  private : int a; 
  public : one()
             {
             	  a=10;
				   cout<<" One Class constructor is called ..."<<endl;
		     cout<<"a = "<<a<<endl; }
		     
		     void modify(int b)
		     {
		     	 a=a+b;
		     	 cout<<"a is modified ...a= "<<a<<endl;
			 }
			
			~one()
			{
				 cout<<"Desctructor is called....Memory is cleared..."<<endl;
			 } 
};

int main()
{
	 one obj;
	 obj.modify(20);
	 obj.modify(40); 
	 
	 return 0;
}
