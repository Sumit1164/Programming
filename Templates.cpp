#include<iostream>
using namespace std;

template<class T>

class vector{
    public:
    T * arry;
    int size;
    vector(int m){
        size = m;
        arry = new T[size];
    }
    T sumVec(vector & v){
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arry[i] + v.arry[i];
        }
        return d;
    }
};
int main(){
    vector <float>v1(3);
    v1.arry[0] = 5.4;
    v1.arry[1] = 7.5;
    v1.arry[2] = 1.78;
    vector <float> v2(3);
    v2.arry[0] = 2.5;
    v2.arry[1] = 3.7;
    v2.arry[2] = 6.57;
    float a = v1.sumVec(v2);
    cout << a<< endl;
    return 0;
}