#include<iostream>
using namespace std;

int main(){
    int a = 75;
    int *ptr = &a;
    cout << "The value of a is: " << *(ptr)<<endl;

    // new operator    -> use to diynamically memory allocation of pointer store address dynamically 
    int *p = new int(57);
    // float *p = new float(57.75);
    cout << "The value of this pointer: " <<*(p) <<endl;

    int *arr = new int[3];
    arr[0] = 5;
    *(arr+1) = 7;
    arr[2] = 57;

    // delete operator
    //  delete arr;  delete some parts

    // delete[] arr; // full delete(use to contineous memory block delete) 
    cout << "The value of arr[0] is : " << arr[0]<<endl;
    cout << "The value of arr[1] is : " << arr[1]<<endl;
    cout << "The value of arr[2] is : " << arr[2]<<endl;
    return 0;
}