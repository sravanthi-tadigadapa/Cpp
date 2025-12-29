#include <iostream>
using namespace std;

class Kamesh {
public:
    void inside() { cout << "Inside class\n"; }
    void outside();
};

void Kamesh::outside() {
    cout << "Outside class\n";
}

int main() {
    Kamesh obj1;
    obj1.inside();
    obj1.outside();  
	return 0; 
           }

