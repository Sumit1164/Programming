// ! FUNCTION TEMPLATE AND FUNCTION TEMPLATE WITH PARAMETER

#include<iostream>
using namespace std;

// float avgNum(int a, int b){
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// float avgNum2(int a, float b){
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// *USING TEMPLATE TO DO BETTER THAN CREATE MULTIPLE FUNCTION
template <class T1, class T2>
float avgNum2(T1 a, T2 b){
    float avg = (a + b) / 2.0;
    return avg;
}

// *USING TEMPLATE TO SWAP 2 NUMBER 
template<class T>
void swaps(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}



int main(){
    float x, y;
    x = avgNum2(5, 6);
    y = avgNum2(5, 6.7);
    printf("The average of these numbers is %.3f", x);  // .3f is basically show output and after point show only 3 digit
    printf("\nThe average of these numbers is %.3f\n", y);

    int s = 5, k = 7;
    swaps(s, k);
    cout << s << endl<< k;
    return 0;
}