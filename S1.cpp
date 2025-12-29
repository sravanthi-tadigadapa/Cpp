#include<iostream>
using namespace std;
class Myclass{
    public : int i; 
             static int si; 
    public : static void sf()
         {
               cout<<"printing the values now ......."<<endl;
               cout<<"si= "<<si<<endl;
         }
};
int Myclass::si;
int main()
{
      Myclass c1;
      c1.sf();
      c1.si+=200;
      Myclass::sf();
      
      return 0; 
}
