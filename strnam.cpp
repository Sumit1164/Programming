#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};
int main(){

    enum Meal{breakfast, lunch, dinner};
    Meal m5 = lunch;
    cout<<m5<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;


    // ep sumit;
    // sumit.eId = 164;
    // sumit.favChar = 'S';
    // sumit.salary = 900000000.10;

    // cout<<sumit.eId<<endl;
    // cout<<sumit.favChar<<endl;
    // cout<<sumit.salary<<endl;
    return 0;
}