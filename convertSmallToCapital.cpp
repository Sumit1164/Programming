#include<iostream>
using namespace std;
char convert(char name){
    char answer = name - 'a' + 'A';
    return answer;
}
int main(){
    char name;
    cout << "Enter a lowercase character: ";
    cin >> name;
    cout << convert(name) << endl;
    return 0;
 }