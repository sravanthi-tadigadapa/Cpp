#include<iostream>
using namespace std;
const int& max(const int& x,const int& y)
{ cout<<"Normal function: ";
  return (x>y)?x:y;
}
template <typename T>
const T& max(const T& x,const T& y)
{ 
   cout<<"Template function: ";
   return (x>y)?x:y;
}
template <typename T>
const T& max(const T& x,const T& y,const T& z)
{ 
   cout<<"3 variables Template function: "<<endl;
   return (max(x,y)>z)?max(x,y):z;
}
int main()
{
	cout<<::max(10.0,23.0)<<endl;
	cout<<max(40,13)<<endl;
	 cout<<max(23,45,11)<<endl;
	cout<<::max<>(10,20)<<endl;
	cout<<::max('a','b')<<endl;
	cout<<::max<double>(20,35.45)<<endl;
	cout<<::max(10,20,3)<<endl;
}