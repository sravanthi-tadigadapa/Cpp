#include<iostream>
#include<string>
using namespace std;
class Account
{
	public: int Id; 
	string Name;
	double Balance;
	
};
int main()
{
	Account a;
	a.Id=1;
	a.Name="Demo";
	a.Balance= 100000;
		
	
	return 0; 
}
