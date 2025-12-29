//FIRST EXAMPLE OF A CLASS  ACCESSING SIMPLE DATA TO ENTER AND DISPLAY
#include<iostream>
using namespace std;
class person{
	private : char name[20];
	           int id;
	
			void getdetails()
			{
				 cout<<"Enter name: "<<endl;
				 cin>>name;
				 cout<<"Enter id : "<<endl;
				 cin>>id;
				 cout<<"Name : "<<name<<endl;
				 cout<<"id : "<<id<<endl;
			}
};
int main()
{
	 person one;
	 one.getdetails();
 return 0; 
}
