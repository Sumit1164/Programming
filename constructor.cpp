#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // Creating a constructor
    Complex(void); // constructor decleration
    void printNumber(){
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex :: Complex(void){
    a = 10;
    b = 0;
}
int main(){
    Complex c;
    c.printNumber();
    return 0;
}

/*   * Property of Constructor
- Constructor is a special member function with the same name as of the class
- It is used to initialize the object of its class
- It is declearde in the puclic section of the class
- They are automatically invoked(Called) whenever the object is created
- Do not have return types and they can not return values
- It can have default arguments 
- We can not refer to their address
*/