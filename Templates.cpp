#include<iostream>
using namespace std;
class vector{
    int * arry;
    int size;
    public:
    vector(int m){
        size = m;
        arry = new int[size];
    }
    int sumVec(vector & v){
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arry[i] * arry[i];
            return d;
        }
        
    }
}
int main(){
    vector v1(3);
    v1.arry[0] = 5;
    v1.arry[1  ] = 7;
    v1.arry[2] = 57;
    return 0;
}