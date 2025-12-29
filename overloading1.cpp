//overloading of function and template function 
#include<iostream>
using namespace std;
template <typename T1,typename T2>
auto getmax(T1 a,T2 b)
{
	 return a>b?a:b;
}
int main()
{
	  cout<<"Max = "<<getmax(10,23.34)<<endl;
	  cout<<"Max = "<<getmax(59.34,10)<<endl;
}