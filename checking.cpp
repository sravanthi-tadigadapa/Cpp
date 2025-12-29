#include<iostream>
using namespace std;
class adding
{
     public: int a,b,c;
            void setvalues()
            { cout<<"Enter the 3 values for a,b,c: "<<endl;
              //scanf("%d%d%d",&a,&b,&c);
              cin>>a>>b>>c;
			}
            void display()
            {
            	cout<<"sum of the 3 numbers is : "<<a+b+c;
			}
};
int main()
{
	adding a1;
	a1.setvalues();
	a1.display();
	
	 return 0; 
}
