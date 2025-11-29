//! List in C++

#include<iostream>
#include<list>
using namespace std;

//* Way 3rd to print the list
void display(list <int> &lst1){
    list<int> :: iterator it;
    for (it = lst1.begin(); it != lst1.end(); it++){
        cout << *it << endl;
    }
    cout << endl;
}
int main(){
    list<int> list1;   // List of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(57);
    list1.push_back(4);

    //! Way 1st to print the list

    list<int>::iterator iter;
    iter = list1.begin();
    cout << *iter << " ";
    iter++;
    cout << *iter << " ";
    iter++;
    cout << *iter << " ";


    //! Way 2nd to print the list

    for (int x : list1)
    {
        cout << x << endl;
    }


    //! Way 3rd to print the list
    display(list1);

    //? Delete an element from the list at the end
    list1.pop_back();
    //? Delete an element from the list at the front
    list1.pop_front();
    //? Delete an element from middle in the list
    list1.remove(4);


    //* Sorting the list
    list1.sort();
    display(list1);

    //* Create another list 
    list<int> list2(3); // Empty list of size 3
    list<int>::iterator itr;
    itr = list2.begin();
    *itr = 4;
    itr++;
    *itr = 5;
    itr++;
    *itr = 7;
    itr++;
    display(list2);


    //? Merging two or more lists
    list1.merge(list2);
    cout << "After merging the list: "<<endl ;


    //? Reversing the list
    list1.reverse();
    display(list1);

    //? Checking the list is empty or not if list don't have an element the return 1, if list having an element then return 0
    list2.push_back(5);
    cout << list2.empty();
    return 0;
}

//* list is a sequence container in C++ implemented as a doubly-linked list.
//? list in C++ does NOT use contiguous memory locations.
//! List is bidirectional liner list  hai jo insert and delete fast
// List It allows fast insertion and deletion at any position because elements are not stored contiguously in memory.