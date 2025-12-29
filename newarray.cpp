#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    chat name[30];
    double cgpa;

public:
        void getData() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }

        void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }

    // Getter for salary (for sorting)
    double getSalary() const {
        return salary;
    }

    // Static function to sort and display employees in descending order by salary
    static void sortAndDisplayDescending(Employee arr[], int n) {
        // Bubble sort in descending order
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j].getSalary() < arr[j + 1].getSalary()) {
                    Employee temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        cout << "\nEmployees sorted by salary (Descending Order):\n";
        for (int i = 0; i < n; ++i) {
            arr[i].display();
        }
    }
};

int main() {
    const int SIZE = 4;
    Employee employees[SIZE];

    cout << "Enter details for 4 employees:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "\nEmployee " << i + 1 << ":\n";
        employees[i].getData();
    }

    Employee::sortAndDisplayDescending(employees, SIZE);

    return 0;
}

