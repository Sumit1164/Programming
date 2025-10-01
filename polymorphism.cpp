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
    Derived obj2D;
    base_C_pointer = &obj2D;
    return 0;
}