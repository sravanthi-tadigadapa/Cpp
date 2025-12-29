#include<iostream>
using namespace std;
class sample
{
	  private : int size;
	  int *p;
	  
	  public: 
	  sample(int s) //constructor
	  {
	  	 size = s; 
	  	 p=new int[size]; // dynamic allocation
	  }
	  ~sample() // desctructor 
	  {
	  	 delete p;
	  	 cout<<"\nDestructor called ...."<<endl;
	  }
	  void getdata()
	  {
	  	 cout<<"\nEnter elements : \n"<<endl;
	  	 for(int i=0;i<size;i++)
	  	 { cin>>p[i];
		   }
	}
		void display()
		{
			 cout<<"\nArray elements are : \n"<<endl;
			 for(int i=0;i<size;i++)
			 {
			 	 cout<<"\t"<<p[i];
			 	  
			 }
		   }
};
int main()
{
	sample s1(5);
	s1.getdata();
	s1.display();
	  return 0;
}
