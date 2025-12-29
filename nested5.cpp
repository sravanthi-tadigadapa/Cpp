#include<iostream>
#include<string>
using namespace std;
class person{
	string name;
	public: class address{
		public: 
		 string country;
		 string stname;
		 int hno;
	             };
	    address addr;
	    void printaddress()
	                 {
	    	 cout<<name<<endl<<addr.country<<endl<<addr.stname<<endl<<addr.hno<<endl;
	                }
		
                 };
int main()
{
	  person p1;
	  //p1.name="kameshvv";   // try to execute this and see the result 
	  p1.addr.country="india";
	  p1.addr.stname="surampalem";
	  p1.addr.hno=34;
	  p1.printaddress();
}
