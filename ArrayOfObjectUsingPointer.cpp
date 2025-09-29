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
    // int *ptr = &size;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int s;
    float k;
    for (int i = 0; i < size; i++)
    {
        cout << "Id and price of item " << i + 1 << endl;
        cin >> s >> k;
        // (*ptr).setData(s, k);
        ptr->setData(s, k);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}