// #include<iostream>
// using namespace std;
/* int sum(int a, int b){
    int c = a+b;
    cout<<"Hello Baby"<<endl;
    return c;
}*/

// Function prototype
/*
int sum (int a, int b);
void g();
int main(){
    int number1, number2;
    cout<<"Enter the first number : "<<endl;
    cin>>number1;
    cout<<"Enter the second number : "<<endl;
    cin>>number2;
    cout<<"The sum of two numbers is : "<<sum(number1, number2)<<endl;
    g();
    return 0;
}

// Function Defination/ prototype
int sum(int a, int b){
    int c = a+b;
    cout<<"Hello Baby"<<endl;
    return c;
}

void g(){
    cout<<"Good Morning Babby"<<endl;
}
*/

// integer size in range of -32768 to 32767
// unsigned integer size in range of 0 to 65535

// call by value in c++
/*
void changeValue(int num){
    num=num+40;
    cout<<num<<endl;
}
int main(){
    int num = 120;
    changeValue(num);
    // cout<<num;
    return 0;
}
    */
// Call by addres & call by refrence
// #include<iostream>
// using namespace std;
// void changeValue(int *p){
//     *p += 10;  // *p = *p+10
//     cout<<"Pointer value : "<<*p<<endl;
// }
// int main(){
//     int num;
//     cout<<"Enter value : ";
//     cin>>num;
//     cout<<"Original Value : "<<num<<endl;
//     changeValue(&num);
//     cout<<"New Value is : "<<num<<endl;
//     return 0;
// }

// inline function

// #include<iostream>
// using namespace std;
// inline int product(int a, int b){
//     return a*b;
// }
// int main(){
//     int a,b;
//     cout<<"ENTER THE VALUE OF A AND B : ";
//     cin>>a>>b;
// cout<<"THE PRODUCT OF A NAD B IS : "<<product(a,b);
// cout<<"THE PRODUCT OF A NAD B IS : "<<product(a,b)<<endl;
// cout<<"THE PRODUCT OF A NAD B IS : "<<product(a,b)<<endl;
// cout<<"THE PRODUCT OF A NAD B IS : "<<product(a,b)<<endl;
// cout<<"THE PRODUCT OF A NAD B IS : "<<product(a,b)<<endl;
// cout<<"THE PRODUCT OF A NAD B IS : "<<product(a,b)<<endl;
// cout<<"THE PRODUCT OF A NAD B IS : "<<product(a,b)<<endl;
// cout<<"THE PRODUCT OF A NAD B IS : "<<product(a,b)<<endl;
// cout<<"THE PRODUCT OF A NAD B IS : "<<product(a,b)<<endl;
// cout<<"THE PRODUCT OF A NAD B IS : "<<product(a,b)<<endl;
// cout<<"THE PRODUCT OF A NAD B IS : "<<product(a,b)<<endl;
//     return 0;
// }

// using static
// #include <iostream>
// using namespace std;
// int product(int a, int b)
// {
//     static int c = 0;
//     c = c + 1;
//     return a * b + c;
// }
// int main()
// {
//     int a, b;
//     cout << "ENTER THE VALUE OF A AND B : ";
//     cin >> a >> b;
//     cout << "THE PRODUCT OF A NAD B IS : " << product(a, b) << endl;
//     cout << "THE PRODUCT OF A NAD B IS : " << product(a, b) << endl;
//     cout << "THE PRODUCT OF A NAD B IS : " << product(a, b) << endl;
//     cout << "THE PRODUCT OF A NAD B IS : " << product(a, b) << endl;
//     cout << "THE PRODUCT OF A NAD B IS : " << product(a, b) << endl;
//     cout << "THE PRODUCT OF A NAD B IS : " << product(a, b) << endl;
//     cout << "THE PRODUCT OF A NAD B IS : " << product(a, b) << endl;
//     cout << "THE PRODUCT OF A NAD B IS : " << product(a, b) << endl;
//     cout << "THE PRODUCT OF A NAD B IS : " << product(a, b) << endl;
//     cout << "THE PRODUCT OF A NAD B IS : " << product(a, b) << endl;
//     cout << "THE PRODUCT OF A NAD B IS : " << product(a, b) << endl;
//     return 0;
// }


// Default Argument 
#include<iostream>
using namespace std;
float moneyReceived(int currentMoney, float factor =1.04){
    return currentMoney * factor;
}
int main(){
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP : If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.15)<<" Rs after 1 year"<<endl;
    return 0;
}