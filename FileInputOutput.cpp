#include<iostream>
#include<fstream>
using namespace std;
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order to work with files in C++, you will have to open it. Primarily, there are two ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the fstream class

/*

int main(){
    // string st = "This is a text to write in a file";
    string st2;
    // ofstream ot("FileInputOutput.txt"); // Write operation
    // ot << st<<endl; // Write the string to the file
    // ot.close(); // Closing the file after writing operation
    // Opening file using constructor and reading from it
    ifstream ik("FileInputOutput.txt"); // Read operation
    // ik >> st2; // Write the second string to the file          --------> This show only the first word
    getline(ik, st2); // This will get the line from the file
    cout << st2 << endl; // Display the read string
    getline(ik, st2); // This will get the next line from the file
    cout << st2 << endl; // Display the read string
    getline(ik, st2); // This will get the next line from the file
    cout << st2 << endl; // Display the read string
    return 0;
}

*/

int main(){
    ofstream out("FileInputOutput.txt");
    cout << "Enter your name: ";
    string name;
    cin >> name;

    out <<"My name is "+ name;
    ifstream in("FileInputOutput.txt");
    string content;
    in >> content;
    cout << "The file of this file is " << content;
    return 0;
}