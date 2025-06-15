#include<iostream>
using namespace std;
int main(){
    // int a = 3;
    // int* b = &a;
    //  & -> (Address of) operator
    // cout<<"The address of a is: "<<b<<endl;
    // cout<<"The address of a is: "<<&a<<endl;

    // * -> (value at) Dereference operator
    // cout<<"The value at address of b is: "<<*b<<endl;


    //  array
    int marks[] = {79, 89, 76, 88};
    // cout<<*marks<<endl;
    // cout<<*(marks+1)<<endl;
    // cout<<*(marks+2)<<endl;
    // cout<<*(marks+3)<<endl;

    // array pointer 
    int* p = marks;
    cout<<"the value of *p is: "<<*p<<endl;
    cout<<"the value of *(p+1) is: "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is: "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is: "<<*(p+3)<<endl;

    // int mm[4];
    // mm[0] = 89;
    // mm[1] = 90;
    // mm[2] = 91;
    // mm[3] = 92;
    // cout<<mm[0]<<endl;
    // cout<<mm[1]<<endl;
    // cout<<mm[2]<<endl;
    // cout<<mm[3]<<endl;
    // for (int i = 0; i < 4; i++){
    //     cout<<"The value of marks "<<i<<" is "<<mm[i]<<endl;
    // }

    // value of mm is change 92 to 95
    // mm[3] = 95;
    // int i = 0;
    // using while loop to iterate mm array elements
    // while(i<4){
    //     cout<<"The value of marks "<<i<<" is "<<mm[i]<<endl;
    //     i++;
    // }

    // ud=sing do while loop to iterate mm array elements
    // do
    // {
    //     cout<<"The value of marks "<<i<<" is "<<mm[i]<<endl;
    //     i++;
    // } while (i < 4);
    
    // using while loop to print a pattern 
    // * * * * *
    //   * * *
    //    * *
    //     * 
    // int n = 5;
    // int j = 1;
    // while(j <= n){
        // int k = 1;
    //     while(k<j){
    //         cout<<" ";
    //         k++;
    //     }
        // int m = 1;
    //     while(m<=n-j+1){
    //         cout<<"* ";
    //         m++;
    //     }
    //     cout<<endl;
    //     j++;
    // }
    // using for loop to print a pattern
    // * * * * *
    //   * * *
    //    * *
    //     *

    // for(int j = 1; j<=n; j++){
    //     for(int k = 1; k<j; k++){
    //         cout<<" ";
    //     }
    //     for(int m = 1; m<=n-j+1; m++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // } 
    return 0;
}