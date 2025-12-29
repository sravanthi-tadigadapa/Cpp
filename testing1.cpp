#include<iostream>
using namespace std; 
int adding(int a,int b,int c)
{
	 return a+b+c;
}
int main()
{
	int a,b,c;
	printf("Enter 3 values : \n");
	scanf("%d%d%d", &a, &b,&c);
	printf("\nThe sum of the 3 numbers is : %d",adding(a,b,c));
	
	return 0; 
}
