#include <iostream>
#include <string>

using namespace std;

// Base class (parent class)
class Animal {

public:
    string name;
    int age;

    // Method available to Animal and its derived classes
    void eat() {
        cout << name << " is eating." << endl;
    }
};

// Derived class (child class)
// Dog inherits from Animal
class Dog : public Animal {

public:
    string breed;

    // Method specific to Dog
    void bark() {
        cout << name << " is barking." << endl;
    }
};

int main() {

    // Creating a Dog object
    Dog dog1;

    // These attributes are inherited from Animal
    dog1.name = "Max";
    dog1.age = 3;

    // This attribute belongs to Dog
    dog1.breed = "German Shepherd";

    // Using inherited data
    cout << "Name: " << dog1.name << endl;
    cout << "Age: " << dog1.age << endl;

    // Using Dog's own data
    cout << "Breed: " << dog1.breed << endl;

    cout << endl;

    // Using an inherited method
    dog1.eat();

    // Using Dog's own method
    dog1.bark();

    return 0;
}