//! Function object (Functors) in STL

#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;
int main(){
    int arrays[] = {70, 40, 90, 45, 23, 1, 2};
    int n = sizeof(arrays) / sizeof(arrays[0]);
    // sort(arrays, arrays + 5); // assending order
    // sort(arrays, arrays + 7, greater<int>()); // dessending order
    for (int i = 0; i < n; i++)
    {
        cout << "The array is: " << arrays[i] << endl;
    }
    
    return 0;
}

// C++reference 
// algorithm stl

//? Function Object : Function wrapped in a class so that it available like an object