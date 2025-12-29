#include<iostream>
#include<string>
using namespace std;
class person{
	
	private : int age;
	string name; 
	public: 
	person(int age,string name)
	{
		this->age=age;
		this->name=name;
	}
	void printvalue()
	{
		  cout<<" Age "<<age<<endl;
		  cout<<" Name "<<name<<endl;
	}
};
int main()
{
	person a(50,"aditya");
	a.printvalue();
}
