#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Ham ham!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Miau!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.makeSound();
    cat.makeSound();

    return 0;
}