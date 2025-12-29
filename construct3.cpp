//Example3 of a CONSTRUCTOR in C++
//for CSE-3
//to be written only in public
//No return type for a constructor
//Automatically called immediately after Object is created

#include <iostream>
using namespace std;
class point{
	        int x,y;
	    public:
	    	//parameterized constructor
	    	point(int x1,int y1)
	    {
	    	 x=x1; y=y1;
		}
	 int getx() {	 return x; }
	 int gety()  {   return y; }
	 
	 };

int main()
{
	  point p(5,6);
	  cout<<"X coordinate : "<<p.getx() <<endl;
	  cout<<"Y coordinate: "<<p.gety() <<endl;
    
	  return 0; 
	  
}
