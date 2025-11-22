//! List in C++

#include<iostream>
#include<list>

// void display(list<int> &lst){
//     list<int>::iterator it;
    
// }
using namespace std;
int main(){
    list<int> list1;   // List of 0 length
    // list<float> list2(5); // Empty list of size 5
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(57);

    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";

    for (int x : list1)
    {
        cout << x << endl;
    }
    
    return 0;
}

//* list is a sequence container in C++ implemented as a doubly-linked list.
//? list in C++ does NOT use contiguous memory locations.
//! List is bidirectional liner list  hai jo insert and delete fast
// List It allows fast insertion and deletion at any position because elements are not stored contiguously in memory.