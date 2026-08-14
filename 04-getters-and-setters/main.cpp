#include <iostream>
#include <string>

using namespace std;

// Getters and setters are public methods used
// to access and modify private data.
class Student {

private:
    string name;
    int age;

public:

    // Constructor
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Getter for name
    // Returns the current value of name.
    string getName() {
        return name;
    }

    // Setter for name
    // Changes the value of name.
    void setName(string newName) {
        name = newName;
    }

    // Getter for age
    // Returns the current value of age.
    int getAge() {
        return age;
    }

    // Setter for age
    // Changes the value of age only if it is valid.
    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        } else {
            cout << "Age cannot be negative." << endl;
        }
    }
};

int main() {

    // Creating a Student object
    Student student1("Aurel", 17);

    // Using getters to read private data
    cout << "Name: " << student1.getName() << endl;
    cout << "Age: " << student1.getAge() << endl;

    cout << endl;

    // Using setters to modify private data
    student1.setName("Alex");
    student1.setAge(18);

    // Displaying the updated data
    cout << "Updated student:" << endl;
    cout << "Name: " << student1.getName() << endl;
    cout << "Age: " << student1.getAge() << endl;

    cout << endl;

    // Trying to set an invalid age
    student1.setAge(-5);

    return 0;
}