#include<iostream>
using namespace std;

class Complex {
	int real,imaginary;
	public: void show()
	{
		  cout<<real<<"+"<<imaginary<<"i"<<endl;
		}
		
		Complex() {}
		Complex(int r,int i)	 
		{
			  real=r;
			  imaginary=i;
		}
		
	Complex operator + (const Complex& obj)
	{
		
	Complex ans;
	ans.real=real+obj.real;
	ans.imaginary=imaginary+obj.imaginary;
	
	return ans;
	}
};



int main()
{
	Complex c1(4,5);
	c1.show();
	Complex c2(10,3);
	c2.show();
	Complex c3=c1+c2;
	
	c3.show(); 
	
	return 0; 
}
