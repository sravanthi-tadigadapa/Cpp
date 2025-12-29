#include <iostream>
using namespace std;

class CSE6 {
public:
    CSE6() { cout << "Constructor called in CSE6 class"<<endl; }
    ~CSE6() { cout << "Destructor called in CSE6 class "<<endl;; }
};
class CSE3 {   int a; 
         public:   CSE3(int x)  {  a=x;   }
            
      ~CSE3() { cout<<" Desctructor called in CSE3 class ..."<<endl; }
	    void display()  { cout<<" value of a = "<<a<<endl;
		} 
};

int main() {
    CSE6 obj1;
    CSE3 obj2(20);
    obj2.display();
    return 0;}
