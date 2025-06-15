#include<iostream>
using namespace std;
int gloable = 6;
void sum(){
    int a;
    cout<< gloable;
}
int main(){
    int gloable = 9;
    gloable = 78;
    // fourth cpp file
    // type of data types :
    // 1- Built in data type : int char float double boolean 
    // 2- user defined data types : class, structure, union, enum
    // 3- Derived data types : array, function, pointer, reference
    int a1= 9, b1= 8;
    float a2= 9.8, b2= 8.7;
    char a= 'S' , b = 'K';
    bool c= true;
    cout<< "The sum is: "<<a1 + b1;
    cout<< "\nThe sum is: "<<a2 + b2<<endl;
    cout<< a << b <<endl;
    sum();
    cout<<gloable<<endl<<c;

    return 0;
}