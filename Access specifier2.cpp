#include <iostream>
using namespace std;
class base
{
	 public: int x;
	    void display()
	    {
	    	 cout<<"Enter the value of Private y: "<<endl;
	    	 cin>>y;
	    	 cout<<"The value of Private y : "<<y<<endl;
		}
	 private: int y;
	 protected : int z;
};
class derived: public base
{
	 public: void show()
	 {
	 	cout<<"Enter the value for Protected z : "<<endl;
	     cin>>z;
	     cout<<"The Protected Z = "<<z<<endl;
      }
	 
};
int main()
{
	base b1;
	cout<<"Enter the value for x : "<<endl;
	cin>>b1.x;
	cout<<"The value of Public x= "<<b1.x<<endl;
	b1.display();
	derived d1;
    d1.show();
    
    d1.display();
	
	
	return 0; 
}
