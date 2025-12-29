#include<iostream>
using namespace std;
class point{
	
	int x,y;
	public: 
	point(){x=0;y=0;}
	point(int x1,int y1){ x=x1;y=y1;}
	 void printpoint(){ cout<<"(x,y) = "<<x <<","<<y<<endl;
	 }
	point operator+(const point& q) {
		 point r;
		 r.x=x+q.x;
		 r.y=y+q.y;
		 return r; 
	}
	point operator-(const point& q) {
		 point r;
		 r.x=x-q.x;
		 r.y=y-q.y;
		 return r; 
	}
};
int main()
{
	  
	point p1(1,2),p2(3,4);
	p1.printpoint() ;
	p2.printpoint();
	point p3=p1+p2;
	point p4=p3-p1;
	point p5=p1+p2+p3-p4;
	
	
	  p3.printpoint();
	  p4.printpoint();
	  p5.printpoint();
	  return 0;
}
