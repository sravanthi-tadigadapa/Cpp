//USING DEFAULT ARGUMENTS IN C++ 
//Example program 2 
#include<iostream> 
using namespace std;
int sum(int a,int b=10,int c=15,int d=20);
int main()
{
	  int a=2;
	  int b=3;
	  int c=4;
	  int d=5; 
	  cout << "sum = "<<sum(a,b,c,d)<<endl;
	  cout<<"sum = "<< sum(a,b,c)<<endl;
	  cout<<"sum = "<< sum(a,b)<<endl;
	  cout<<"Sum = "<< sum(a)<< endl;
	  cout<<"sum = "<< sum(b,c,d)<<endl;
	  return 0;
}
int sum(int i,int j,int k,int l)
{ return i+j+k+l;
}
