#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        void setNum(int n1, int n2){
            a = n1;
            b = n2;
        }
        void printNum(){
            cout << "Your number is: " << a << " + " << b << "i" << endl;
        }
};
int main(){
    Complex c1, c2;
    c1.setNum(1, 2);
    c1.printNum()   ;

    c2.setNum(3, 4);
    c2.printNum();
    cout << "Complex numbers have been set and printed successfully." << endl;
    return 0;
    
}