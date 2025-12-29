//function template overloading 
#include<iostream>
using namespace std;
int getmax(int a,int b){
	cout<<"in the normal function ...."<<endl;
	return a>b?a:b;
}
template <typename T1,typename T2>
auto getmax(T1 a, T2 b)
 {
 	return a>b?a:b;
 }
template <typename T1,typename T2,typename T3>
auto getmax(T1 a,T2 b,T3 c)
{
	return getmax(a,b)>c?getmax(a,b):c;
}

int main()
{
	cout<<"Max is : "<<getmax(10,20)<<endl;
	/*cout<<"Max is : "<<getmax(20.34,12)<<endl;
	cout<<"Max is : "<<getmax(12,20.34)<<endl;
	cout<<"Max is : "<<getmax(45.23,78.91)<<endl;
	cout<<"Max is : "<<getmax('p','q')<<endl;*/
	//now overloading function will be called by the compiler
	cout<<" Max of three entities is : "<<getmax( getmax(234,56),8)<<endl; 
		
	
	return 0; 
}