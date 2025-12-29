#include<iostream>
using namespace std;
struct complex
{
	 int real; 
	 int imaginary; 
};
complex operator+( const complex &c1,const complex &c2){
	complex c4;
	c4.real=c1.real+c2.real;
	c4.imaginary=c1.imaginary+c2.imaginary;

return c4;
}
complex operator+( const complex &c1,int x){
	complex c4;
	c4.real=c1.real+x;
	c4.imaginary=c1.imaginary+x;

return c4;
}
complex operator+( int x,const complex &c){ return c+x;}
ostream& operator<<(ostream &out,complex c)
{
	 out<<c.real<<"   "<<c.imaginary<<endl;
	 
	 return out;
}
int main()
{
	  complex c1,c2;
	  c1.real=10; 
	  c1.imaginary=100; 
	  c2.real=20; 
	  c2.imaginary=200; 
	  complex c3= c1+c2;
	  cout<<" real part of c3 : "<<c3.real <<"   Imag. part of c3 : "<<c3.imaginary <<endl; 
	  
	  complex c4=c3+10;
	  complex c5=200+c4;
	   
	  
	  cout<<c1<<endl;
	  cout<<c2<<endl;
	  cout<<c3<<endl;
	  cout<<c4<<endl;
	  cout<<c5<<endl;
	  
	  return 0; 
}
