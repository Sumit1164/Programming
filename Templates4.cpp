// ! Member function templates and Overloading template function 
#include<iostream>
using namespace std;

template<class T>
class Sumit{ 
    public:
    T data;
    Sumit(T a){
        data = a;
    }
    void display();
};

// ! this function is within the class, i'll seprate them the use scpoeresolution operator
template <class T>
void Sumit<T> :: display(){
    cout << data<<endl;
}

// ! Function overloading
void func(int a){
    cout << "I'm first function() " << a << endl;
}

template <class T>
void func(T a){
    cout << "I'm template function() " << a << endl;
}

int main(){
    // Sumit<int> s(5);
    // Sumit<float> k(7.5);
    // Sumit<string> sk("SuKa");
    // cout << s.data<<endl;
    // k.display();
    // sk.display();
    func(4);   // * who is called actually two function name is same the func first called when the exact match takes the higest priority
    return 0;
}