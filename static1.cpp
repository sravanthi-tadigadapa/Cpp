//STATIC MEMBER FUNCTION 1 
#include<iostream>
using namespace std;
class Myclass
{
	 public: int i;
	 static int si;
	 
};
int Myclass::si;
int main()
{
Myclass obj1,obj2;
cout<<obj1.i<<endl;
cout<<obj1.si<<endl;
cout<<obj2.i<<endl;
cout<<obj2.si<<endl;

obj1.i=100;
obj1.si++;
cout<<".................After first increment..."<<endl;
cout<<obj1.i<<endl;
cout<<obj1.si<<endl;
cout<<obj2.i<<endl;
cout<<obj2.si<<endl;
obj2.i=200;
obj2.si++;
cout<<".................After second increment..."<<endl;
cout<<obj1.i<<endl;
cout<<obj1.si<<endl;
cout<<obj2.i<<endl;
cout<<obj2.si<<endl;

return 0; 
}
