//Example for inline functions Example: 2
//Finding the Cube of a given number using inline function
#include<iostream>
using namespace std;
inline int cube(int a)
{
     return a*a*a;
}
int main()
{
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	cout<< "Cube of the number"<<n<<" is : "<<cube(n)<<endl;
	  return 0; 
}
