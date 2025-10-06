#include <iostream>
#include <string>
using namespace std;

// Class that represents a person
class Person
{

    // private members that will be hidden
    int socialID;
    string name;

public:
    // Constructor using initialization list
    Person(string n, int id) : name(n), socialID(id) {}

    // Getter for name (const as it doesn't modify the object)
    string getName() const
    {
        cout << "THe person is not exits"<<endl;
        return name;
    }

    // Optional setter for name
    void setName(string newName)
    {
        name = newName;
    }

    // Validates the socialID
    bool validateID() const
    {
        return (socialID >= 0 && socialID <= 1001);
    }
};

int main()
{
    Person p1("Geek", 11001);

    if (!p1.validateID())
        cout << "Invalid SocialID" << endl;

    cout << "Name: " << p1.getName() << endl;

    return 0;
}

// What is Encapsulation? -> Encapsulation means combining data and the functions that work on that data into a single unit, like a class.
// For example, think of a company with different departments—finance, sales, and accounts.Each department handles its own tasks and data.The finance department deals only with financial records, and the sales department handles only sales.Just like that, in programming, each class manages its own data and operations, keeping everything separate and protected.That's encapsulation.

// Advantages and Disadvantages of Encapsulation:
/*
1. Data Hiding                               1. Increased Code Complexity
2. Improved Maintainability                  2. Performance Overhead
3. Reusability                               3. Overuse of Accessors Can Break Encapsulation
4. Flexibility and Control                   4. Learning Curve
*/