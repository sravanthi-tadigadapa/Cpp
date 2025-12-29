
//Example for Constructor and Desctructor with different locations 
#include<iostream>
using namespace std;
class Account 
{
	public: Account() { cout<<"Object is created..."<<endl;}

~Account() { cout<<"Object is destroyed..."<<endl;}
};
//Account a1,a2;
void create(){ cout<<"Now we are inside global function...."<<endl;
                  Account a1,a2;
                  cout<<"Exiting the global function...."<<endl;
}
int main()
{
	
	cout<<"Entering main............."<<endl;
	//Account a1,a2;
	create();
	cout<<"Exiting main............"<<endl;
	
	
	return 0; 
}
