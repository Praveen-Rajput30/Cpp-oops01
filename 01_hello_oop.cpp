#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void display() {
        cout << "Hello, " << name << "!" << endl;
    }
};

int main() {
    Student s;
    s.name = "Praveen";
    s.display();

    return 0;
}
