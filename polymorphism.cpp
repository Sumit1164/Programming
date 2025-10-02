
// Pointer to Derived Classes in C++
/*
#include<iostream>
using namespace std;
class Base{
    public:
        int varBase;
        void display(){
            cout << "Displaying Base Class variable varBase " << varBase << endl;
        }
};
class Derived : public Base{
public:
    int varDer;
    void display()
    {
        cout << "Displaying Derived Class variable varDer " << varDer << endl;
    }
};
int main(){

    // Polymorphism means one name multiple forms
    // Ex- Water -> (cold) -> Ice  ||  Water -> (hot) -> Air
    // Ex- Function overloading, Operator overloading, Virtual functions

    // About Polymorphism it's type and ex of polymorphism, Please checkout ->  Polymorphism.png

    Base *base_C_pointer;
    Base obj1B;
    base_C_pointer = &obj2D;
    base_C_pointer->varBase = 34;
    base_C_pointer->display();

    Derived *derived_C_pointer;
    Derived obj2D;
    derived_C_pointer = &obj2D;
    derived_C_pointer->varDer = 57;
    derived_C_pointer->display();
    return 0;
}

*/

#include<iostream>
using namespace std;
class Base
{
public:
    int varBase = 57;
    virtual void display()
    {
        cout << "Displaying Base Class variable varBase " << varBase << endl;
    }
};
class Derived : public Base
{
public:
    int varDer = 75;
    void display()
    {
        cout << "Displaying Base Class variable varBase " << varBase << endl;
        cout << "Displaying Derived Class variable varDer " << varDer << endl;
    }
};
int main(){
    Base *base_Class_pointer;
    Base obj_Base;
    Derived obj_Derived;
    base_Class_pointer = &obj_Derived;
    base_Class_pointer->display();

    return 0;
}

/*

// Run time polymorphism

#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    virtual void speak()
    {
        cout << "The animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "The dog barks." << endl;
    }
};

// Another derived class
class Cat : public Animal
{
public:
    void speak() // "override" is optional
    {
        cout << "The cat meows." << endl;
    }
};

int main()
{
    Animal *animal1 = new Dog(); // base class pointer to derived class
    Animal *animal2 = new Cat();

    animal1->speak(); // Output: The dog barks.
    animal2->speak(); // Output: The cat meows.

    // Clean up
    delete animal1;
    delete animal2;

    return 0;
}





// Compile Time Polymorphism

// Function Overloading (same function name, different parameters)

#include <iostream>
using namespace std;

class Calculator
{
public:
    // Function to add two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // Function to add two floats
    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Calculator calc;

    cout << "Sum of 2 and 3: " << calc.add(2, 3) << endl;
    cout << "Sum of 1, 2 and 3: " << calc.add(1, 2, 3) << endl;
    cout << "Sum of 1.5 and 2.5: " << calc.add(4.5f, 2.5f) << endl;
    return 0;
}
    */