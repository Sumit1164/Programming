
/*
    -> Reusability is a very important feature of OOPs.
    -> In C++ we can reuse a class and additional features to it.
    -> Reusing classes saves time and money.
    -> Reusing already tested and debugged class will save a lot of effort of developing and debugging the same thing again.

    What is inheritance in C++?
        -> The concept of reusability in C++ is supported using inheritance
        -> The existing class is called as the "Base Class".
        -> The new class which is inherited is called as the "Derived Class".

        -> There are different types of inheritance in C++:
            1. Single Inheritance - A Derived Class with only one Base Class.
            2. Multiple Inheritance - A Derived Class with more than one Base Class.
            3. Hierarchical Inheritance - Several Derived Classes from a singlr Base Class.
            4. Multilevel Inheritance - Deriving a Class from already Derived Class.
            5. Hybrid Inheritance - Hybrid Inheritance is a combination of multiple inheritance and multilevel inheritance 
                                  - A class is derived from two classes as in multiple inheritance.
                                  - However, one of the parent classes is not a base class. 
*/



#include<iostream>
using namespace std;

// Base Class
class Emp{
    int id;
    
    public:
        float salary;
        Emp(int intId){
            id = intId;
            salary = 8888.9;
        }
};

/*
//    ----------------------------->  Derived Class Syntax   <--------------------------------------------
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}{
    class members/methods/etc...
}

----------> Note : Default visibility-mode is private.
-----> Pubic visibility Mode : Public member of the base class become Public member of the derived class
-----> Private visibility Mode : Public member of the base class become Private member of the derived class
-----> Private members are never inherited derived class 
*/
class Engineer : Emp{
    public:
        int role = 57;
}

int main(){
    Emp Sumit(1), Kasu(2);
    cout << Sumit.salary << endl;
    cout << Kasu.salary << endl;
    Engineer skillK(1);
    return 0;
}