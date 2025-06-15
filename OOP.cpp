/*
#include<iostream>
using namespace std;
class  Employee
{
private:
int a, b, c;
public:
int d, e;
void setData(int a1, int b1, int c1);
void getData(){
    cout << "The value of a is : " <<a<<endl;
    cout << "The value of b is : " <<b<<endl;
    cout << "The value of c is : " <<c<<endl;
    cout << "The value of d is : " <<d<<endl;
    cout << "The value of e is : " <<e<<endl;
}
};
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    Employee Sumit;
    Sumit.e = 123;
    Sumit.d = 34;
    Sumit.e = 89;
    Sumit.setData(1, 2, 5);
    Sumit.getData();
    return 0;
}
*/

// Nesting of member function
// #include <iostream>
// #include <string>
// using namespace std;
// class binary
// {
//     string s;

// public:
//     void read(void);
//     void chk_bin(void);
//     void ones_complement(void);
//     void display(void);
// };
// void binary :: read(void){
//     cout << "Enter a binary number : ";
//     cin >>s;
// }
// void binary :: chk_bin(void){
//     for (int i = 0; i <s.length(); i++)
//     {
//         if(s.at(i) != '0' && s.at(i) != '1'){
//             cout << "Incorrect binary format" << endl;
//             exit(0);
//         }
//     }
//     cout << "Correct binary format" << endl;
// }

// void binary :: ones_complement(void){
//     for (int i = 0; i < s.length(); i++){
//         if (s.at(i) == '0'){
//             s.at(i) = '1';
//         }
//         else{
//             s.at(i) = '0';
//         }
//     }
// }

// void binary :: display(void)
// {
//     for (int i = 0; i < s.length(); i++){
//         cout << s.at(i);
//     }
// }

// int main(){
//     binary b;
//     b.read();
//     b.chk_bin();
//     b.ones_complement();
//     cout << "Displaying your binary number" << endl;
//     b.display();
//     cout << endl;
//     return 0;
// }



// Lecture no 23

// object memory allocation & using array in classes
// #include<iostream>
// using namespace std;
// class shop{
//     int itemId[20];
//     int itemPrice[30];
//     int counter;
//     public:
//         void initCounter(void) { counter = 0; }
//         void setPrice(void);
//         void displayPrice(void);
// };
// void shop :: setPrice(void){
//     cout << "Enter Id of your item no "<< counter+1 << endl;
//     cin >> itemId[counter];
//     cout << "Enter Price of your item " << endl;
//     cin >> itemPrice[counter];
//     counter++;
// };
// void shop :: displayPrice (void){
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
//     }
    
// }
// int main(){
//     shop dukaan;
//     dukaan.initCounter();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.displayPrice();
//     return 0;
// }

// Lecture no 24

// #include<iostream>
// using namespace std;
// class employee{
//     int id;
//     static int count;

// public:
//     void setData (void){
//         cout << "Enter the Id ";
//         cin >> id;
//         count++;
//     }
//     void getData (void){
//         cout << "The Id of employee " << id << " and this is employee number "<<count<<endl;
//     }
// };
// int employee::count; // default value is 0
// int main(){
//     employee sumit, kashish;
//     sumit.setData();
//     sumit.getData();

//     kashish.setData();
//     kashish.getData();
//     return 0;
// }


// Lecture no 25


// array of objects
#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary = 212;
        cout<<"Enter the Id of employee: ";
        cin >> id;
    }
    void getId(void){
        cout<<"The Id of employee is: "<<id<<endl;
    }
};
int main() {
    // 1st way to create an array of objects
    // Employee sumit, kashish, shubh, kajal;
    // sumit.setId();
    // sumit.getId();

    // 2nd way to create an array of objects suppose we have 1000 employees so we don't want to create 1000 objects manually
    Employee S7[5];
    for (int i = 0; i < 5; i++){
        S7[i].setId();
        S7[i].getId();
    }
    return 0;
};