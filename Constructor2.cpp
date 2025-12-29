//Dynamic constructor program
#include<iostream>
using namespace std;
//memory to the objects allocated at runtime using 'new'
//instead of malloc() and free() we use 'new' and 'delete'
class Sample
{ private : int size;
            int *p;
  public: 
           Sample(int s)
            { size=s; 
			  p=new int[size];
			}
			void getdata()
			{
				cout<< "Enter array elements: "<<endl;
				for(int i=0;i<size;i++)
				{
					cin>>p[i]; 
				} 
			}
			void display()
			{
				cout<<"Array elements are : "<<endl;
				for(int i=0;i<size;i++)
				 {
				 	 cout<<"  "<<p[i];
				 	 
				 }
			}
		};
	int main()
		{
			 Sample s1(5),s2(3);
			 cout<<" Object 1: "<<endl;
			 s1.getdata();
			 s1.display();
			 cout<<"\n Object 2: "<<endl;
			 s2.getdata();
			 s2.display();
		
			 delete hy6p;
			 
			 return 0;		}
