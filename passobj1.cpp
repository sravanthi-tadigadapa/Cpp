#include<iostream>
using namespace std; 
class Sample{
	private : int a ;
	public: void seta(int i) { a=i;}
	    void sum(Sample o1,Sample o2)
	    {
	    	 a= o1.a+o2.a;
		}
		void display()
		{
			  cout<<" Value of a = "<<a<<endl;
		}
             };
int main()
{
	Sample s1,s2,s3;
	s1.seta(10);
	s2.seta(20);
	s3.sum(s1,s2);
	s3.display();
return 0; 
}
