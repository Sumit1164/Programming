// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n <=1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }
// int main(){
//     // Factorial of a number 
//     // 6! = 6*5*4*3*2*1 =720
//     int a;
//     cout<<"Enter a number : ";
//     cin>>a;
//     cout<<"The number of "<<a<<" is : "<<factorial(a)<<endl;
//     return 0;
// }


// Fibonacci
#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int main(){
    int a;
    cout<<"enter a number : ";
    cin>>a;
    cout<<"The term in fibonacci sequence at position "<<a<<" si "<<fib(a)<<endl;
    return 0;
}