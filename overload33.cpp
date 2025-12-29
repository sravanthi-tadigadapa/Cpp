#include<iostream>
using namespace std;
template <typename T1,typename T2>
auto getmax(T1 a,T2 b)
{
    cout<<"in template function ...."<<endl;
	return (a>b)? a: b;
}
/*template <typename T1,typename T2,typename T3>
auto getmax(T1 a,T2 b,T3 c)
{
    return getmax(a,b)>c?getmax(a,b):c;
}*/
int main()
{
	
	cout<<"Max = "<<getmax(34,67)<<endl;
	cout<<"Max = "<<getmax(4.34,1.23)<<endl;
	cout<<"Max = "<<getmax(4,8.22)<<endl;
	cout<<"Max = "<<getmax('p','s')<<endl;
	cout<<"Max = "<<getmax(getmax(45.23,267.34),121)<<endl;
	return 0; 
}