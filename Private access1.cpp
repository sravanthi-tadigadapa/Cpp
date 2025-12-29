// Accessing Private data members through Public functions defined in CLASS 
#include<iostream>
using namespace std; 
class Employee{
	  public  :   string name; 
	  
	        double get_salary(){
			                    return salary;
							 }
							 
			void set_salary(double potential_salary){
			 	 salary = potential_salary;
			 }
	  private : double salary;
	           
};
int main()
{ 
	Employee emp1;
	emp1.name="Kamesh";
	emp1.set_salary(50000);
	cout<<"Salary of the employee is : "<<emp1.get_salary()<<endl;
	
	  
	  
	  return 0; 
}
