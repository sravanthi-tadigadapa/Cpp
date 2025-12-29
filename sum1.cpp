#include<iostream>
 
class Adding
{
	 private: 
	 int a,b;
	 public: 
	 void getvalues(int x, int y)
	 {  
	     a=x; b=y;
	     std::cout<<"(Printing inside the class function) Sum of the numbers is " << x+y<<std::endl;
	 }
	 int printsum(int x,int y)
	 {
	 	 return x+y;
	 }
	 
};
int main()
{
	 Adding object1;
	 int num1, num2; 
	 std::cout << "Enter the first number : " << std::endl;
	 std::cin >> num1; 
	 std::cout << "Enter the second number : " << std::endl;
	 std::cin >> num2; 
	 //std::cout<<" the sum of two numbers is : " << object1.printsum(num1,num2) << std::endl;
	 object1.getvalues(num1,num2);  // you can test here by altering the program 
	 
	 return 0;
}

