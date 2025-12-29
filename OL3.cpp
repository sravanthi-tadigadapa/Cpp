
// coordinate points example 
#include<iostream>
using namespace std;
class point{
	int x,y;
	public: 
	point() { x=0;y=0;}
	point(int x1,int y1) { x=x1;y=y1;}
	point operator -(){
		 return point(-x,-y);
	}
	void print()
	{cout<<"x : "<<x<<" y : "<<y<<endl;}
	
};

int main()
{
	point p1(1,2),p2;
	p1.print();
	p2.print();
	point p3=-p1;
	p3.print();
	
	return 0; 
}
