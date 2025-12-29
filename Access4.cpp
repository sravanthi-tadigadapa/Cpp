//Access Specifiers in C++ - Third program 
#include<iostream>
using namespace std; 

class second{
	private : string color;   // I created a private variable inside a class
	public: void display()           // this function is to access the private variable 'color'
	        {
	        	 cout<<"color of the car is :"<<color<<endl;
			}
			void setcolor(string c)
			{
				 color=c;
			}
			
			};
int main()
{
	second maruti;
	string colourname;    // this is created to get the color name from keyboard
	cout<<"Enter color name: "<<endl;
	cin>>colourname;
	maruti.setcolor(colourname);  // calling the class function to set color
	maruti.display(); // calling the class funciton to display 

	return 0; 
}
