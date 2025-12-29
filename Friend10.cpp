/*A friend function of a class is defined outside the class scope
It has the right to access all private and protected members of the class
A friend can be function, function templates, member function, Class or class template
To declare a function we give the keyword 'friend'.
*/
#include<iostream>
using namespace std;
class square
{
	 int side;
	 public: 
	 friend void printside(square s);
	 void setside(int s1);
};
void printside(square s)
{
   cout<<"side of square : "<<s.side<<endl;
}
void square::setside(int s1)
{
	side = s1;
	
}
int main()
{
	 square s;
	 s.setside(5);
	 printside(s);
	 
	 
	 return 0;
}
