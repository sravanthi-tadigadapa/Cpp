//Static member function example 1
//to access static members and other static member functions
//cannot access non-static variables and functions
 #include<iostream>
using namespace std; 
class Sample
{
	 private : static int s;
	           int n;
	 public : static void incr()
	           {
	           	   s++;
	           	   cout<<"S = "<<s<<endl;
	           	   //cout<<"n="<<n<<endl;
			   }
			   void getn()
			   {
			   	 n=255;
			   }
};
int Sample::s=100;
int main()
{
	Sample::incr();
	Sample::incr();
	Sample::incr();
return 0; 
}
