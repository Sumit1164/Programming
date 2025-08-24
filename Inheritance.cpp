
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


/*
#include<iostream>
using namespace std;

// Base Class
class Emp{
    public:
        int id;
        float salary;
        Emp(int inpId){
            id = inpId;
            salary = 8888.9;
        }
        Emp(){}
};

*/

/*
//    ----------------------------->  Derived Class Syntax   <--------------------------------------------
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}{
    class members/methods/etc...
}

-----> Note : Default visibility-mode is private.
-----> Pubic visibility Mode : Public member of the base class become Public member of the derived class
-----> Private visibility Mode : Public member of the base class become Private member of the derived class
-----> Private members are never inherited derived class 
*/

/*
class Engineer : Emp{
    public:
    Engineer(int inpId){
        id = inpId;
    }
        int role = 57;
};

int main(){
    Emp Sumit(1), Kasu(2);
    cout << Sumit.salary << endl;
    cout << Kasu.salary << endl;
    Engineer skillK(1);
    cout<<skillK.role;
    return 0;
}



// Example of Single Inheritance
#include<iostream>
using namespace std;

class BaseC{
public:
    int a, b;
    void sum(){
        cout << "The sum of " << a << " and " << b << " is: " << a + b << endl;
    }
};
class DerivedC : public BaseC{
public:
    void printsum(){
        cout << "Sum of two number, using single inheritance" << endl;
    }
};

int main(){
    DerivedC obj;
    obj.a = 57;
    obj.b = 59;

    obj.sum();
    obj.printsum();
    return 0;
}



// For Public Inheritance

#include<iostream>
using namespace std;
class Base{
    int data1;
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base :: setData(void){
    data1 = 5;
    data2 = 7;
}
int Base :: getData1(){
    return data1;
}
int Base ::getData2(){
    return data2;
}
class Derived : public Base{
    int data3;
public:
    void process();
    void display();
};
void Derived :: process(){
    data3 = data2 * getData1();
}
void Derived ::display(){
    cout << "Value of data1 is " << getData1() << endl;
    cout << "Value of data1 is " << data2 << endl;
    cout << "Value of data1 is " << data3 << endl;
}

int main(){
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}




// For Private Inheritance

#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData(void)
{
    data1 = 5;
    data2 = 7;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}
class Derived : private Base
{
    int data3;

public:
    void process();
    void display();
};
void Derived ::process()
{
    setData();
    data3 = data2 * getData1();
}
void Derived ::display()
{
    cout << "Value of data1 is " << getData1() << endl;
    cout << "Value of data1 is " << data2 << endl;
    cout << "Value of data1 is " << data3 << endl;
}

int main()
{
    Derived der;
    der.process();
    der.display();
    return 0;
}

*/

// For Protected Inheritance
#include<iostream>
using namespace std;
class Base{
protected:
    int a;
private:
    int b;
};
/*
For a protected member:
                            Public derivation      Private derivation     Protected derivation
    1. Private members         Not Inherited          Not Inherited          Not Inherited
    2. Protected members       Protected              Private                Protected 
    3. Public members          Public                 Private                Protected
*/
class Derived : protected Base{

};
int main() {
    Base b;
    Derived d;
    // cout << d.a;           -> this show will error because a is protected member 
    return 0;
}