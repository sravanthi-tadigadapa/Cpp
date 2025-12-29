#include<iostream>
#include<string>
using namespace std;
class student{
	   	   string name;
	   	   int marks; 
	   	   public: student(string n,int m) { cout<<"Constructor activated.."<<endl;name=n;marks=m; }
	   	   void display() { cout<<"Name: "<<name<<" marks : "<<marks<<endl;}
	   	   ~student() { cout<<"Destroyer activated...."<<endl;  }
	   	   void updatemarks(int x){ marks=x;		  }
};
void printdata(student &obj)   // dear students ! remove the & and test once again the output
{  obj.updatemarks(99);
   obj.display(); }
int main()
{
	  /*student s1("kamesh",50);
	  printdata(s1);*/   //normal declaration of object and accessing & printing
	  //printdata(student("kamesh",50));  // using anonymous objects to printdata
	  student s2("second",89);
	  s2.display();
	  printdata(s2);
	  s2.display();
	  return 0; 
}

