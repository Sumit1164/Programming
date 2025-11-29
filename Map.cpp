//! Map is an associative array

#include<iostream>
#include<string>
#include<map>

using namespace std;
int main(){
    map<string, int> marksMap;
    marksMap["Sumit"] = 98;
    marksMap["Kashish"] = 99;
    marksMap["Shubh"] = 90;
    marksMap["Kajal"] = 95;

    //* Insert new person in the map
    marksMap.insert({{"Armaan", 99}, {"Anshika", 95}});

    map<string, int>::iterator itra;
    for (itra = marksMap.begin(); itra != marksMap.end(); itra++){
        cout << (*itra).first << " " << (*itra).second << "\n";
    }
    cout << "The size of map is: " << marksMap.size()<<endl;
    cout << "The Max-size of map is: " << marksMap.max_size()<<endl;
    cout << "The empty value of map: " << marksMap.empty()<<endl;

    auto result = marksMap.emplace("i", 1); // key: "i", value: 1
    cout << "Inserted? " << boolalpha << result.second << "\n";
    cout << "Key: " << result.first->first << ", Value: "<< result.first->second << "\n";
    return 0;
}