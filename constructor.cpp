/*

    // Constructor Simple

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

  * Property of Constructor
- Constructor is a special member function with the same name as of the class
- It is used to initialize the object of its class
- It is declearde in the puclic section of the class
- They are automatically invoked(Called) whenever the object is created
- Do not have return types and they can not return values
- It can have default arguments
- We can not refer to their address


// ----------->   Default and Parameterized Constructor

// Default Constructor
# include<iostream>
using namespace std;
class S7T{
    int a, b;
    public:
        S7T(void);
        void printNum(){
            cout << "The sum of " << a << " + " << b << "i" << endl;
        }
};
S7T :: S7T(void){
    a = 9;
    b = 8;
}
int main(){
    S7T K;
    K.printNum();
    return 0;
}

// Parameterized Constructor




#include <iostream>
using namespace std;
class S7T
{
    int a, b;

public:
    S7T(int, int);
    void printNum()
    {
        cout << "The sum of " << a << " + " << b << "i" << endl;
    }
};
S7T ::S7T(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    S7T K(5, 8);

    // Explicit call
    S7T KS = S7T(5, 8);
    K.printNum();
    KS.printNum();
    return 0;
}


// Point Constructor




#include<iostream>
using namespace std;

class Point{
    int x, y;
public:
    Point(int a, int b){
        x = a;
        y = b;
    }
    void displayPoint() {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};
int main(){
    Point p(1, 4);
    p.displayPoint();

    Point q(5, 9);
    q.displayPoint();
    return 0;
}



// Constructor Overloading




#include<iostream>
using namespace std;
class S7K{
    int a, b;
public:
    S7K(int x, int y){
        a = x;
        b = y;
    }
    S7K(int x){
        a = x;
        b = 0;
    }
    void printNum(){
        cout << "The sum of " << a << " + " << b << "i" << endl;
    }
};
int main(){
    S7K s(4, 7);
    s.printNum();
    S7K k(7);
    k.printNum();
    return 0;
}

// Constructor with default arguments


#include<iostream>
using namespace std;
class Simple{
    int data1;
    int data2;
    public:
        Simple(int a, int b = 9){
            data1 = a;
            data2 = b;
        }
    void printData(){
        cout << "The value of "<< data1 <<" and "<< data2 << endl;
        cout << "The sum of A + B = " << data1 + data2 << endl;
    }
};
int main(){
    Simple s(3);
    s.printData();
    return 0;
}


// Dynamic Initialization of Object Using Constructor



#include<iostream>
using namespace std;

class BankDeposit{
    int principle;
    int years;
    float intrestRate;
    float returnValue;
public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit :: BankDeposit(int p, int y, float r){
    principle = p;
    years = y;
    intrestRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++){
        returnValue = returnValue * (1 + intrestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    intrestRate = float(r) / 100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

void BankDeposit :: show(){
    cout << "Principle amount was " << principle
    <<". Return value after "<<years
    <<" years is: "<<returnValue<<endl;
}


int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();
    cout << "Enter the value of p, y, r: ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    cout << "Enter the value of p, y, R: ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}


// Copy Constructor

*/