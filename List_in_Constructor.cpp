#include<iostream>
using namespace std;
/*
Synatx for initilization list in constructor:
constructor (argument-list) : initilization-section{
    assignment + other code;
}
*/
class Test{
int a, b;
public :
Test(int i, int j) : a(i), b(j){
cout<<"Constructor executed"<<endl;
cout << "Value of a " << a<<endl;
cout << "Value of b " << b << endl;
}
};

int main(){
    Test k(5, 7);
    return 0;
}