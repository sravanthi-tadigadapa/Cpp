#include<iostream>
using namespace std;
//template <typename identifier> return_type ( parameters  ) { ...function body}
template <typename generic> void display(generic  x)
{
	 cout<<"You have passed "<<x<<endl;
}

int main()
{
	display(10);
	display("kamesh");
	display(34.56);
	
	return 0; 
}
