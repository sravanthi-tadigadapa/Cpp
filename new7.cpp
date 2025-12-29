//creating objects dynamically 

#include<iostream>
using namespace std;
class Account
{
	  int id;
	  string name;
	  double balance;
	  public: 
	  Account() { cout<<"Object is created ..."<<endl;   }
	  ~Account() { cout<<"Object is destroyed ..."<<endl;}
	  void setdata() { cout<<"Enter id , name and balance ...."<<endl;
	  
	                    cin>>id;
	                    cin.ignore();
	                    getline(cin,name);
						cin>>balance;
	                 }
	  void getdata() { cout<<"id= "<<id<<" Name: "<<name<<" Balance:  "<<balance<<endl; }
};
void create()
{
	Account *pAccount;
	pAccount=new Account(); // memory will be created in heap memory
	//use the required code 
	/*(*pAccount).setdata();
	(*pAccount).getdata();*/
	pAccount->setdata();
	pAccount->getdata();
	delete pAccount;
}
int main()
{
	cout<<"Enter main...."<<endl;
	create();
	//delete pAccount;
	cout<<"Exiting main..."<<endl;
	
	
	
	return 0; 
}
