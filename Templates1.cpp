#include<iostream>
using namespace std;

// Templates with multiple(different) parameters

template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
    void display(){
        cout << this->data1<<endl << this->data2;
    }
};
int main(){
    myClass<char, float> obj('X', 5.7);
    obj.display();
    return 0;
}