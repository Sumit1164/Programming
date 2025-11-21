//* STL-> Standard Template Library
#include<iostream>
#include<vector>

using namespace std;

// template<class T>
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
        cout << "i'm at "<<v.at(i) <<endl;
    }
    cout << endl;
}

int main(){
    vector<int> vec;
    int element, size;
    cout << "Enter the size of vector: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++){
        cout << "Enter an element value to add in vector: ";
        cin >> element;
        vec.push_back(element);
    }
    // vec.pop_back(); // delete last element
    display(vec);

    // vector<int>::iterator iter = vec.begin();
    // vec.insert(iter, 7);   // iter -> postion index 0, iter+1 -> position index 1... // if you want to 7 print 10 times then use (iter, 10,  7)
    // display(vec);
    //? Vector methods
    return 0;
}