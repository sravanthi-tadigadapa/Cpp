#include<iostream>
#include<cstring>
using namespace std;
class student{
	private : int rollno;
	          char name[35];
	    //nested class here 
	    class Address{ 
	       private : int hno;
	        char street[35];
	        char city[30];
	        char state[30];
	        char pincode[7];
	    public: 
	    	void setaddress(int h,char *s,char *c,char *st,char *p)
	    	 {
	    	 	 hno=h;
	    	 	 strcpy(street,s);
	    	 	 strcpy(city,c);
	    	 	 strcpy(state,st);
	    	 	 strcpy(pincode,p);
			 }
			 void showaddress(){
			 	cout<<hno<<endl;
			 	cout<<street<<endl;
			 	cout<<city<<endl;
			 	cout<<pincode<<endl;
			 	cout<<state<<endl;
			 }
		        };
		 Address add;   
		 public: void setaddress(int h,char *s,char *c,char *st,char *p)
		 {
		 	 add.setaddress(h,s,c,st,p);
	      }   
		  void showaddress()
		  {
		  	 cout<<"STUDENT DATA ...."<<endl;
		  	 cout<<name<<endl;
		  	 cout<<rollno<<endl;
		  	 add.showaddress();
		   } 
			 
		 public: 
		 void setrollno(int r) { rollno=r;}
		 void setname(char *n) { strcpy(name,n);}
		 
};

int main()
{
	student s1;
	s1.setrollno(201);
	s1.setname("kamesh");
	s1.setaddress(1,"adb road","surampalem","andhra pradesh","533437");
	s1.showaddress();
	
	return 0; 
}
