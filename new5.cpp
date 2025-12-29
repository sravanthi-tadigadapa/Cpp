#include<iostream>
using namespace std;
class Account
{
	 private : 
	 int Id;
	 string Name;
	 double Balance;
	 
	 public:
	 	void getdata();
	 	void setdata();
};
void Account::getdata()
{
	cout<<"Enter id: " <<endl;
	cin>>Id;
	cout<<"Enter Name: "<<endl;
	cin>>Name;
	cout<<"Enter balance: "<<endl;
	cin>>Balance;
}
void Account::setdata()
{
cout<<"Id: "	<<Id<<endl;
cout<<"Name: "<<Name<<endl;
cout<<"Balance: "<<Balance<<endl; 
	
}

int main()
{
	Account a1,a2;
	a1.getdata();
	a2.getdata();
	a1.setdata();
	a2.setdata();
	return 0; 
}
