#include<iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
        void setData(int a, int b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
int main(){
    int size = 3;
    int *ptr = &size;
    Shop *ptr = new Shop[size];
    return 0;
}