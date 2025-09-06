/*
#include<iostream>
using namespace std;

-----> Syntax for inheriting in multiple inheritance

         class DerivedC : visibility-mode base1, visibility-mode base2{
             class body of class DerivedC;
         }



class Base1{
protected:
    int base1int;
public:
    void set_base1int(int a){
        base1int = a;
    }
};

class Base2{
protected:
    int base2int;
public:
    void set_base2int(int b){
        base2int = b;
    }
};

class Derived : public Base1, public Base2{
    public:
        void show(){
            cout << "The value of Base1 is " << base1int << endl;
            cout << "The value of Base2 is " << base2int << endl;
            cout << "The sum of these values is " << base1int + base2int << endl;
        }
};
int main(){
    Derived sumit, kasu;
    sumit.set_base1int(57);
    sumit.set_base2int(57);
    sumit.show();

    kasu.set_base1int(75);
    kasu.set_base2int(75);
    kasu.show();
    return 0;
}



// Exercise on C++ inheritance

create 2 classes : 1. SimpleCalculator - Take input of 2 numbers using a utility function and perform +, -, *, / and display the result using another function.2. ScientificCalculator - Take input of 2 numbers using a utility function and perform any four scientific operations of your choice and display the result using another function.create another class HybridCalculator and inherit it using these 2 classes : question1.what type of inheritance are you using ? question2.which mood inheritance are you using ? question3.create an object of HybridCalculator and display result of simple and scientific calculator.



✅ Answers to Questions:
Q1: What type of inheritance are you using?

Multiple Inheritance — HybridCalculator inherits from both SimpleCalculator and ScientificCalculator.

Q2: Which mode of inheritance are you using?

Public Mode Inheritance — Both parent classes are inherited using the public keyword.

Q3: Create an object of HybridCalculator and display result of simple and scientific calculator.


#include <iostream>
#include <cmath>
using namespace std;

// SimpleCalculator Class
class SimpleCalculator
{
protected:
    double a, b;

public:
    void getSimpleInput()
    {
        cout << "Enter two numbers for Simple Calculator: ";
        cin >> a >> b;
    }

    void displaySimpleOperations()
    {
        cout << "\n--- Simple Calculator Operations ---\n";
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division: Cannot divide by zero.\n";
    }
};

// ScientificCalculator Class
class ScientificCalculator
{
protected:
    double x, y;

public:
    void getScientificInput()
    {
        cout << "\nEnter two numbers for Scientific Calculator: ";
        cin >> x >> y;
    }

    void displayScientificOperations()
    {
        cout << "\n--- Scientific Calculator Operations ---\n";
        cout << "Power (x^y): " << pow(x, y) << endl;
        if (x >= 0)
            cout << "Square root of x: " << sqrt(x) << endl;
        else
            cout << "Square root: Invalid input (negative number)\n";

        if (x > 0)
            cout << "Log10 of x: " << log10(x) << endl;
        else
            cout << "Log10: Invalid input (non-positive number)\n";

        cout << "Sine of x degrees: " << sin(x * M_PI / 180) << endl;
    }
};

// HybridCalculator Class using Multiple Inheritance
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    // No additional members needed
};

int main()
{
    HybridCalculator calc;

    // Simple Calculator Operations
    calc.getSimpleInput();
    calc.displaySimpleOperations();

    // Scientific Calculator Operations
    calc.getScientificInput();
    calc.displayScientificOperations();

    return 0;
}



// Ambiguity in Inheritance



#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout << "Hi, How are you?" << endl;
        }
};
class Base2{
    public:
        void greet()
        {
            cout << "Hn, Kaise ho?" << endl;
        }
};
class Derived : public Base1, public Base2{
    int a;
    // Ambiguity Resolution
    public:
        void greet(){
            Base1::greet();
        }
};
int main(){
    Base1 objBase1;
    Base2 objBase2;
    objBase1.greet();
    objBase2.greet();
    Derived objDerived;
    objDerived.greet();
    return 0;
}

*/

// Virtual Base Class in C++
#include<iostream>
using namespace std;
int main(){
    return 0;
}