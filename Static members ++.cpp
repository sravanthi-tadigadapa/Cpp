// static members program 3  for CSE-3

#include<iostream>
#include<cstring>
using namespace std;
class Student{
	
	private : int id, age;
	          string name;
	static int student_count;
	static int teacher_count;
public : Student(int id, int age, string name)
	{ this->id=id;
	this->age=age;
	this->name=name;
	student_count++;
	}
	void print_student_details()
	{
		 cout<<"Id : "<<id<<endl;
		 cout<<"Age: "<<age<<endl;
		 cout<<"Name : "<<name<<endl;
    }
    static void get_real_count()//only static variables are to be used here 
    {
    	cout<<"Total REal count : "<<student_count+teacher_count<<endl;
    	
	}
};
//Now we must initialize(define)  static variables outside the CLASS
int Student::student_count=0;
int Student::teacher_count=4;

int main()
{
	Student s1(10,19,"s1");
	Student s2(11,19,"s2");
	Student s3(12,19,"s3");
	s1.get_real_count();
	
	s1.print_student_details();
	s2.print_student_details();
	
	return 0;
}
