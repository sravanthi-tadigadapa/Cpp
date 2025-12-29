// ACCESSING PUBLIC VARIABLES defined in CLASS
//Please check why error is coming here 
#include<iostream>
using namespace std;
class car{
	
	string color; 
	
};

int main()
{
	  car hyundai;
	  hyundai.color="blue";
	  cout<<"Color of the car is : "<<hyundai.color<<endl;
	  
}
