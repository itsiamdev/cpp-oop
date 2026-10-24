# C++ OOP - Object-Oriented Programming Concepts

This repository is a collection of introductory C++ examples for learning
object-oriented programming (OOP). Each topic is in a separate directory and
contains a complete program in `main.cpp` that demonstrates the concept using
simple classes and objects.

## Topics

| Directory | Topic | What it demonstrates |
| --- | --- | --- |
| `01-classes-and-objects` | Classes and objects | Defining the `Student` class, creating an object, and using its attributes. |
| `02-constructors` | Constructors | Initializing `Student` objects when they are created. |
| `03-encapsulation` | Encapsulation | Hiding attributes with `private` and accessing them through public methods. |
| `04-getters-and-setters` | Getters and setters | Reading and modifying private attributes, including validation that an age is non-negative. |
| `05-inheritance` | Inheritance | Extending the `Animal` class with `Dog` and reusing inherited attributes and methods. |
| `06-polymorphism` | Polymorphism | Overriding the virtual `makeSound()` method in the `Dog` and `Cat` classes. |
| `07-virtual-functions` | Virtual functions | Calling overridden behavior through a pointer to the base class. |
| `08-abstract-classes` | Abstract classes | Defining a pure virtual method and implementing it in derived classes. |
| `09-interfaces` | Interfaces | Defining the `IPayment` interface and processing different payment methods through the same function. |
| `10-composition` | Inheritance | Using the `Animal` base class in `Dog` to reuse the `eat()` method. Although the directory is named `10-composition`, the current example demonstrates inheritance, not composition. |

## How to use the examples

The examples are independent: compile and run one `main.cpp` at a time. You
need a C++ compiler that supports C++11 or later, such as `g++`.

From the repository root on Windows, compile and run the first example as
follows:

```powershell
g++ -std=c++11 .\01-classes-and-objects\main.cpp -o .\example.exe
.\example.exe
```

For another topic, replace the path to `main.cpp` with the directory you want.
For example:

```powershell
g++ -std=c++11 .\09-interfaces\main.cpp -o .\example.exe
.\example.exe
```

## Purpose

This project is intended for learning and individual practice. Follow the
topics in order to see how OOP concepts build on one another: from defining
classes and initializing objects to access control, inheritance, and
polymorphic behavior.

## License

This project is licensed under the MIT License. See the [LICENSE](./LICENSE)
file for details.
