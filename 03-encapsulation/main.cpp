#include <iostream>
#include <string>

using namespace std;

// Encapsulation means keeping data private
// and controlling access to it through public methods.
class Student {

private:
    // Private attributes cannot be accessed directly
    // from outside the class.
    string name;
    int age;

public:

    // Constructor
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Public method used to access the student's name
    string getName() {
        return name;
    }

    // Public method used to access the student's age
    int getAge() {
        return age;
    }
};

int main() {

    // Creating a Student object
    Student student1("Aurel", 17);

    // We cannot access name and age directly because they are private.
    // student1.name = "Alex"; // ERROR
    // student1.age = 18;      // ERROR

    // Instead, we use public methods to access the data.
    cout << "Name: " << student1.getName() << endl;
    cout << "Age: " << student1.getAge() << endl;

    return 0;
}