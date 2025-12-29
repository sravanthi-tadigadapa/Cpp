#include<iostream>
#include<string>
using namespace std;
int main()
{
	  string firstname,lastname;
	  cout<<"Enter your first name: " <<endl;
	  cin>>firstname;
	  cout<<"Enter your last name: "<<endl;
	  //cin>>lastname;
	  getline(cin,lastname,'#');
	  string name=firstname + " " +lastname;
	   cout<<"hello...."<<name<<endl;
	   cout<<"Please enter your full name: "<<endl;
	   //cin>>name;
	   cin.ignore();
	   //fflush(stdin) ;
	   getline(cin,name,'#');
	   cout<<"Full Name is : "<<name<<endl;
	       
	  return 0; 
}
