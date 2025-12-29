#include<iostream>
using namespace std;
/*int getmax(int x,int y)
{
	return (x>y) ? x:y;
}
char getmaxchar(char x, char y)
{ return (x>y) ? x:y;
}*/
//Replace the earlier code with this one
template <typename Gen> 
Gen getmax(Gen x,Gen y)
{
	return (x>y) ? x:y;
}
int main()
{
	int x,y;
	char c1='a', c2='k';
	double d1=34.56,d2=56.78;
	cout<<"Enter two numbers x and y : "<<endl;
	cin>>x>>y;
	cout<<"Big number is : "<<getmax(x,y)<<endl; 
	cout<<" Big char is : "<<getmax(c1,c2)<<endl;
	cout<<"Big percentage is : "<<getmax(d1,d2)<<endl;
	//cout<<"with one int and one double ==> "<< static_cast<int>(getmax(x,d1))<<endl;

	return 0; 
     
}
