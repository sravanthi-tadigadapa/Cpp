//FRIEND FUNCTION EXAMPLE 11
#include<iostream>
using namespace std;
class Sample{
	
	private : int a,b;
	public: 
	void getdata()
	{
		cout<<"Enter a,b values: "<<endl;
		cin>>a>>b;
	}
friend void display(Sample obj)
	{
		cout<<"Private members a and b are : "<<obj.a<<" and "<<obj.b<<endl;
	}
};
int main()
{
	Sample s1;
	s1.getdata();
	display(s1);
	 
	 return 0;
}
