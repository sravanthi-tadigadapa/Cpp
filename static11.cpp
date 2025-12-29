//program to explain about static integer
#include<iostream>
using namespace std;
class one{
		public: 	int a;
			static int b;
		public: void accept()
		{
			  cout<<"Enter value of a : "<<endl;
			  cin>>a;
		}
		void print()
		{
			 cout<<"a= "<<a<<endl;
			 cout<<"static b= "<<b<<endl;
	 	}
	};
int one::b=1000;
int main()
{
	 one obj1,obj2;
	 cout<<"Accepting the values of Object 1 : "<<endl; 
	 obj1.accept();
	 cout<<"Modifying the value of static variable ...."<<endl; 
	 obj1.b+=1000;
	 obj2.b+=200;
	 one::b-=500;
	 cout<<"printing the values of Object 2 now ...."<<endl; 
	 obj1.print();
	 obj2.accept();
     obj2.print(); 
	  
	
	  return 0 ; 
}
