//Constructor overloading program 1
#include<iostream>
using namespace std;
class Sample
{
	 private : int a,b;
	 public: Sample() { cout<<"Default constructor is activated..."<<endl;
	                                    a=10;b=20;}
	 Sample(int x)               { a=x;b=x;}
	 Sample(int x,int y)           { a=x;b=y;}
	 void display()
	             {
	 	              cout<<"a=  "<<a<<endl;
	 	                  cout<<"b=   "<<b<<endl; 
	             }
};
int main()
{
	 Sample s1;
	 s1.display();
	 Sample s2(35);
	 s2.display();
	 Sample s3(40,59);
	 s3.display();
	 
return 0;
}
