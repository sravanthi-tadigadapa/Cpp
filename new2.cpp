#include<iostream>
using namespace std;
void pp(int &a,int &b){
	a++;
	b+=10;
}
void swap(int &a, int &b)
{
	 int temp;
	 temp = a;
	 a=b;
	 b=temp;
}
int main()
{
	int n=10; 
	int &m=n;
	//n+=5;
	m+=10;
	cout<<" m = "<<m  <<"  n=  "<<n<<endl;
	int x,y;
	x=y=120 ;
	pp(x,y);
	cout<<" x= "<<x <<" y =  "<<y<<endl;
	swap(x,y);
	cout<<" x= "<<x <<" y =  "<<y<<endl;
	  return 0; 
}
