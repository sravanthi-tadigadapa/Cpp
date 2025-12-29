#include <iostream>
using namespace std;
class Student {
private:
    int id;
    char name[30];
    double cgpa;
public:
        void getData() {
        cout << "Enter ID: "<<endl;
        cin >> id;
        cout << "Enter Name: "<<endl;
        cin>>name;
        cout << "Enter CGPA: "<<endl;
        cin >> cgpa;
                       }
 void display() {
        cout << "ID:        " << id << ", Name:     " << name << "     CGPA: " << cgpa << endl;
                    }

 double getcgpa(){
        return cgpa;
                     }
static void sortAndDisplayDescending(Student arr[], int n) 
         {        // Bubble sort in descending order
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j].getcgpa() < arr[j + 1].getcgpa()) {
                    Student temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
  cout << "\nStudents sorted by CGPA (Descending Order):\n";
        for (int i = 0; i < n; ++i) {
                                  arr[i].display();
                                        }
                 }
};
int main() {
    const int SIZE = 4;
    Student s[SIZE];

    cout << "Enter details for 4 students:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].getData();
    }

    Student::sortAndDisplayDescending(s, SIZE);

    return 0;
}

