#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Please enter the number : "<<endl;
	cin>>number;
	for(int i=1;i<=10;i++)
	{
		cout<<number<<" * "<<i<<" = "<<number*i<<endl;
		
	}
	cout<<"Enter the two numbers to be added : "<<endl; 
	int n1,n2;
	cin>>n1>>n2;
	cout<<"sum of two numbers is : "<<n1+n2<<endl;
	
	
	
	return 0; 
}
