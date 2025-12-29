/*Access specifiers example 
Depositing and Withdrawing amount by a function and displaying it 
CSE-3 21.07.2025 
*/
#include<iostream>
#include<cstring>
using namespace std;
class Account{

	//Attributes here  
	     private:  string name;
	              double balance;
	        //member functions here 
	       public:  void deposit(double amount){ balance+=amount;}
	        bool withdraw(double amount){balance-=amount;}
			void display(){cout<<"updated balance is : "<<balance<<endl;}
			
			}; // end of the Class definition 
int main()
{
	 Account a1;
	 a1.deposit(1000.0);
	 a1.display();
	 a1.withdraw(200) ;
	 a1.display();
	 
	 
	 return 0; 
}
