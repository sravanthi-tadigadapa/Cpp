#include<iostream>
using namespace std;
/*int adding(int x,int y)
{  
 cout<<"in normal global function....."<<endl;
 return x+y;
}*/
template <typename T1,typename T2>
auto adding(T1 a,T2 b)
{
	 //cout<<"in template function...."<<endl;
	 return a+b;
}
int main()
{
	cout<<"(int,int)"<<adding(2,4)<<endl;
	cout<<"(int,double)"<<adding(5,6.8)<<endl;
	cout<<"(int,int)"<<adding(4,5)<<endl;
	
	
	
	  return 0; 
}