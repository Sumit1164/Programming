/*
#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        void setNum(int n1, int n2){
            a = n1;
            b = n2;
        }
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNum(){
            cout << "Your number is: " << a << " + " << b << "i" << endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNum(o1.a + o2.a, o1.b + o2.b);
    return o3;
}


int main(){
    Complex c1, c2, sum;
    c1.setNum(1, 2);
    c1.printNum();

    c2.setNum(3, 4);
    c2.printNum();

    sum = sumComplex(c1, c2);
    sum.printNum();

    return 0;
}


 Properties of friend functions

 1. Friend functions are not member functions of a class.
 2. They can access private and protected members of the class.
 3. They are usually used to perform operations on objects of the class.
 4. They are defined outside the class but can be declared inside the class.
 5. They can be called using the object of the class or directly.

 */

// Lecture no 27

// Friend Class and Member Friend Functions in C++

#include <iostream>
using namespace std;

class Complex;

class Calculator{
    public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex, Complex);
};


class Complex
{
    int a, b;
    friend int Calculator :: sumRealComplex(Complex, Complex );

    public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNum()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};
int Calculator :: sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main(){
    Complex o1, o2;
    o1.setNum(1, 2);
    o2.setNum(3, 4);
    Calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout << "Sum of real parts: " << result << endl;
    return 0;
}