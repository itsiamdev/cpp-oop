#include <iostream>
#include <string>

using namespace std;

// A class is a blueprint used to create objects.
// It can contain data (attributes) and functions (methods).
class Student {
public:
    // Attributes of the Student class
    string name;
    int age;
};

int main() {

    // Creating an object of the Student class
    Student student1;

    // Assigning values to the object's attributes
    student1.name = "Aurel";
    student1.age = 17;

    // Displaying the object's data
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;

    return 0;
}