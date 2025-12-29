// C++ program to access and print array of objects' data
#include<iostream>
using namespace std;
class item
{
  char name[30];
  float price;
  public:
  void getitem();
  void printitem();
};
void item::getitem()
{
  cout << "Item Name = "<<endl;
  cin >> name;
  cout << "Price = "<<endl;
  cin >> price;    
}
void item ::printitem()
{
  cout << "Name : " << name << 
          "\n";
  cout << "Price : " << price << 
          "\n";
}
const int size = 3;
int main()
{
  item t[size];
  for(int i = 0; i < size; i++)
  {
    cout << "Item  : " << 
            (i + 1) << "\n";
    t[i].getitem();
  }
  
  for(int i = 0; i < size; i++)
  {
    cout << "Item Details : " << 
             (i + 1) << "\n";
    t[i].printitem();
  }
}
