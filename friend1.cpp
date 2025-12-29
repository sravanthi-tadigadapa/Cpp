//FRIEND FUNCTION usage in C++
#include<iostream>
using namespace std;
class Car{
	int srno;
	public: friend void printsrno(Car obj);
	   void setvalue(int sr);
};
void Car::setvalue(int sr) 
{
	 srno=sr; 
}
void printsrno(Car obj)
{ 
  cout<<"The serial number is : "<<obj.srno<<endl;
}
int main()
{
	Car car1;
	car1.setvalue(1111);
	printsrno(car1);
	
	return 0;
}
