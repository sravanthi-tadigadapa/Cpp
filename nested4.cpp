#include<iostream>
#include<string>
using namespace std;
class person{
		string name;
	public: 	void setname(string s){ name=s;}
	            void getname(){ cout<<"Outer class ...name= "<<name<<endl;
				}
	
	           class address{
			  private : int hno;
			             string stname;
			             string city;
			    public: void setaddress(int x,string y,string z)
			                      {  hno=x;
			                      stname=y;
			                      city=z;
								  }
						void printaddress(){
							cout<<"Inner class.........."<<endl;
							cout<<hno<<"  "<<stname<<" "<<city<<endl;
						}
			  	 		};
	
	
 
};
int main()
{
	person other;
	other.setname("kameshvv...");
	other.getname();
	person::address addr1;
	addr1.setaddress(23,"mg road","Bangalore");
	addr1.printaddress();
	
	
	return 0; 
}
