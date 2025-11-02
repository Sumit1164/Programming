#include<iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3=string>
class Sumit{
    public:
        T1 a;
        T2 b;
        T3 c;
        Sumit(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout << "The value of a: "<< this->a << endl;
            cout << "The value of b: " << this->b << endl;
            cout << "The value of c: " << this->c << endl;
        }
};
int main(){
    Sumit<> k(57, 7.5, "Sumit7");
    k.display();
    cout << endl;
    Sumit<float, string, string> s(5.7, "K", "S");
    s.display();
    return 0;
}