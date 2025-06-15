#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
// Volume of cylinder
int volume (double r, int h){
    return 3.148*r*r*h;
}
// Volume of cube
int volume (int a){
    return a*a*a;
}
// Volume of rectangle
int volume(int l, int b , int h){
    return l*b*h;
}
int main(){
    cout<<"the sum of two numbers:  "<<add(7,9)<<endl;
    cout<<"the sum of three numbers: "<<add(7,9,10)<<endl;
    cout<<"Volume of cylinder: "<<volume(7,10)<<endl;
    cout<<"Volume of cube: "<<volume(7)<<endl;
    cout<<"Volume of rectangle: "<<volume(7,9,10)<<endl;

}