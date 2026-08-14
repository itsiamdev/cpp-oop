#include <iostream>
#include <string>

using namespace std;

// A class is a blueprint used to create objects.
class Student {
public:
    string name;
    int age;

    // Constructor
    // It is automatically called when an object is created.
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }
};

int main() {

    // Creating objects using the constructor
    Student student1("Aurel", 17);
    Student student2("Alex", 18);

    // Displaying the data of the objects
    cout << "Student 1:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;

    cout << endl;

    cout << "Student 2:" << endl;
    cout << "Name: " << student2.name << endl;
    cout << "Age: " << student2.age << endl;

    return 0;
}