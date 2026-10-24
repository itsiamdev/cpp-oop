#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Ham ham!\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Miau!\n";
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.makeSound();
    cat.makeSound();

    return 0;
}