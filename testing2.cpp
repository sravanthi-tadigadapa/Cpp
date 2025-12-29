// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Addition{
     int a,b;
     public: Addition()
                   { a=0;b=0;}
                   Addition(int a1,int b1) {a=a1;b=b1; }
          void printing(){ cout<< "a= "<<a<<" b= "<<b<<endl;}
          Addition operator - (Addition& object){
          	Addition modified;
          	 modified.a= a-+ object.a;
          	 modified.b=b-object.b;
          	 
          	  return modified;
		  }
};
int main() {
    Addition obj1;
    obj1.printing();
    Addition obj2(10,20);
    obj2.printing();
    Addition obj3(27,35);
    obj3.printing();
    Addition obj4;
    obj4= obj2-obj3;
    obj4.printing();
    

    return 0;
}
