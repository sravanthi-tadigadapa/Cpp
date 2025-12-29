//unary operator overloading 
// +, -, ++ and --
 #include<iostream>
using namespace std;
class over
{ int no;
public: over(){ no=1;}
void display() { 
cout<< "no = "<<no<<endl;
}
void operator++()
{ ++ no;
} 
void operator++(int)
{ no++;
} 
};

int main()
{
	  over obj;
	  obj.display();
	  ++obj;
	  obj.display(); 
	  obj++;
	  obj.display();
	  
	  return 0; 
}
