//CSE-3   21.07.2025      SET - GET METHODS 
#include<iostream>
#include<cstring>
using namespace std;
class Account{
 //Attributes here  
	    private:  string name;
	              double balance;
	        //member functions here 
	    public: 
		   void set_balance(double amount) { balance=amount; } 
	       void display() { cout<<"Now the Balance is : "<<balance<<endl;}
	       void deposit(double amount);
	       void withdraw(double amount);
		   
	}; // end of the Class definition 
void Account::deposit(double amount)
{
	 balance+=amount;
}
void Account::withdraw(double amount){
	balance-=amount;
}
int main()
{
	 Account a1;
	 a1.set_balance(2000);
	 a1.display();
	 a1.deposit(1000.34);
	 a1.display();
	 
	 return 0; 
}
