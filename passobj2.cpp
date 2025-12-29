#include<iostream>
using namespace std;
class sample
{
	 private : int x;
	 public : void setx(int n)
	            { x=n;
				}
				sample sum(sample s1)
				{
					 sample temp;
					 temp.x= x+ s1.x;
				}
				int display()
				{ return x;
				}
		};
		int main()
		{
			  sample s1,s2,s3;
			  s1.setx(100);
			  s2.setx(200);
			  
			  s3=s1.sum(s2);
			  cout<<"s3 is : "<<s3.display()<<endl;
		return 0; 
	   }
	
