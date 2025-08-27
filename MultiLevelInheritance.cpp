#include<iostream>
using namespace std;

class GrandFather{
    public:
        int a, b;
        void dy()
        {
            cout << "I'm father of Father " << endl;
        }
};
class Father : public GrandFather{
    public:
        int x;
        void display()
        {
            cout << "I'm father of a " << endl;
        }
};
class Child : public Father{
public:
    int z;
    void dp()
    {
        cout << "I'm son " << endl;
    }
};
int main(){
    Child obj;
    obj.dp();
    obj.Father ::display();
    obj.Father ::GrandFather ::dy();
    cout << "Code Competions: " << endl;
    return 0;
}