#include<iostream>
using namespace std;
int sum(int a , int b )
{
	 return a+b;
}
int sum(int ar[],int len)
{
	 int tmp=0;
	 for(int i=0;i<len;i++)
	 {
	 	 tmp+=ar[i];
	 }
	 return tmp;
}
int main()
{
	int res=sum(10,20);
	cout<< "sum is : "<<res<<endl;
	int ar[]={ 1,2,3,4,5,56,7,8,9,10};
	cout<<"sum of the array elements : "<<sum(ar,10)<<endl;
	return 0; 
}
	
