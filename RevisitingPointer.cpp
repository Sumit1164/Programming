#include<iostream>
using namespace std;
int main(){
    int a = 75;
    int *ptr = &a;
    cout << "The value of a is: " << *(ptr);
    return 0;
}