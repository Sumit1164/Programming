/*
#include <iostream>
using namespace std;

class Vehicle
{
private:
    void piston()
    {
        cout << "4 piston\n";
    }

    void manWhoMade()
    {
        cout << "Markus Librette\n";
    }

public:
    void company()
    {
        cout << "GFG\n";
    }
    void model()
    {
        cout << "SIMPLE\n";
    }
    void color()
    {
        cout << "Red/GREEN/Silver\n";
    }
    void cost()
    {
        cout << "Rs. 60000 to 900000\n";
    }
    void oil()
    {
        cout << "PETROL\n";
    }
};
int main()
{

    Vehicle obj;
    obj.company();
    obj.model();
    obj.color();
    obj.cost();
    obj.oil();
}



*/




#include<iostream>
using namespace std;
class Base{
    private :
        int a, b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }
        void display(){
            cout << "The value of a is: " << a << endl;
            cout << "The value of b is: " << b << endl;
        }
};
int main(){
    Base ob;
    ob.setData(7, 5);
    ob.display();
    return 0;
}