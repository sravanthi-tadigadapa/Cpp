//DEFINING MEMBER FUNCTIONS INSIDE/OUTSIDE THE CLASS
#include <iostream>
#include <cstring>
using namespace std;
class student{
       private:int rno;
             char name[20];
             public:
void getdata()
{  cout<<"Enter rno: "<<endl;cin>>rno;cout<<"Enter name: "<<endl;cin>>name;
}
void display_data()
   { 	cout<<"\n Roll No: "<<rno<<endl;	cout<<"Name : "<<name;	}
};
int main()
{     student s1,s2;
s1.getdata();
s1.display_data() ;
/*s2.rno=72;
strcpy(s2.name,"Kamesh");*/
s2.getdata();
s2.display_data() ;
 return 0;
}
