#include<iostream.h>
class overloadex
{
	 public : 
	 void sum(int x, int y)
	  {
	  	 cout << " sum of two numbers : " << (x+y) << end;
}

void sum(int x, int y,int z)
{ cout << "sum of 3 numbers " << (x+y+z) << end;

}
};
int main()
{
	overloadex obj;
	obj.sum(15,20);
	obj.sum(5,7,9);
	return 0;
}

