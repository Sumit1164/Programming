// // Print number 101 to 200

// #include<iostream>
// using namespace std;
// int main(){
//     int n, end = 200;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = n; i<= end; i++)
//     {
//         cout << i<<endl;
//     }
    
// }


// // Print A to Z

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     for ( ch = 'A'; ch <='Z'; ch++)
//     {
//         cout << ch<<endl;
//     }
    
// }


// // Print number in reverse order

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = n; i>= 0; i--)
//     {
//         cout <<i<<endl;
//     }
// }

// // Print number from 1 to 100 but difference is 3

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= 100; i = i+3){
//         cout << i<<endl;
//     }
// }


// // Multiplication table 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= 10; i++){
        
//         cout <<i*n << endl;
//     }
// }


// // Calculate power of a number 
// #include<iostream>
// using namespace std;
// int main(){
//     int n, pow, num;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Enter power: ";
//     cin >> pow;
//     num = n;
//     for (int i = 1; i < pow; i++){
//         num = num * n;
//     }
//     cout << num;
// }

// //  Sum of n natural numbers

// #include <iostream>
// using namespace std;
// int main(){
//     int n, sum = 0;
//     cout<< "Enter a number: ";
//     cin >> n;
//     // 1st method
//     for (int i = 1; i <= n; i=i+1){
//         sum = sum + i;
//     }
//     cout << sum<<endl;
//     // 2nd method
//     cout << (n * (n + 1)) / 2;
// }


// //  Sum of n natural number squares

// #include<iostream>
// using namespace std;
// int main(){
//     int n, sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++){
//         sum = sum + i * i;
//     }
//     cout << sum;
// }


// // Factorial of n numbers

// #include<iostream>
// using namespace std;
// int main(){
//     int n, fact = 1;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i=i+1){
//         fact = fact * i;
//     }
//     cout << fact;
// }

// // Prime number 

// #include<iostream>
// using namespace std;
// int main(){
//     int n, prime = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     if(n < 2){
//         cout << "It's not a prime number";
//         return 0;
//     }
//     for (int i = 2; i < n; i=i+1){
//         if(n % i == 0){
//             cout << "It's not a prime number";
//             return 0;
//         }
//         cout << "The given number is Prime number";
//         return 0;
//     }
// }


// Fibonacci Series of a number

#include<iostream>
using namespace std;
int main(){
    int end = 0, prev = 1, n, current;
    cout << "Enter a number: ";
    cin >> n;
    if(n<= 1)
        return n;
    for (int i = 2; i <= n; i++){
        current = end + prev;
        end = prev;
        prev = current;
    }
    cout << current;
    return current;
}

