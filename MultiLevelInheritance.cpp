/*

#include<iostream>
using namespace std;

class GrandFather{
    public:
        int a, b;
        void dy()
        {
            cout << "I'm father of Father " << endl;
        }
};
class Father : public GrandFather{
    public:
        int x;
        void display()
        {
            cout << "I'm father of a " << endl;
        }
};
class Child : public Father{
public:
    int z;
    void dp()
    {
        cout << "I'm son " << endl;
    }
};
int main(){
    Child obj;
    obj.dp();
    obj.Father ::display();
    obj.Father ::GrandFather ::dy();
    cout << "Code Competions: " << endl;
    return 0;
}

-----------------------> Another Example of multilevel inheritance <-------------------------------



#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "This animal eats food." << endl;
    }
};

// Derived class from Animal
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "The dog barks." << endl;
    }
};

// Derived class from Dog
class Puppy : public Dog
{
public:
    void weep()
    {
        cout << "The puppy weeps." << endl;
    }
};

int main()
{
    Puppy p;
    p.eat();  // inherited from Animal
    p.bark(); // inherited from Dog
    p.weep(); // own method

    return 0;
}


-------------> Multilevel inheritance using getter and setter functions <-------------


*/

