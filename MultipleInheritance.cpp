#include<iostream>
using namespace std;
/*
-----> Syntax for inheriting in multiple inheritance

         class DerivedC : visibility-mode base1, visibility-mode base2{
             class body of class DerivedC;
         }

*/

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