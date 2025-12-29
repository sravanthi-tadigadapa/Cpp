#include<iostream>
#include<string>
using namespace std;


int main()
{
	  string firstname,lastname;
	  cout<<"Enter the first name : "<<endl; 
	  cin>>firstname;
	  cout<<"Enter the last name:   "<<endl;
	  cin.ignore();
	  getline(cin,lastname);
	  //cin>>lastname;
	  cout<<firstname <<"   "<<lastname<<endl;
	  string fullname = firstname + "  "+lastname;
	  cout<<"full name is : "<<fullname;
	  
	  
	  
	  return 0; 
}
