/*
// convert only a single charater into Upper Case
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


// Convert a sentence or whole paragraphs into Upper Case
#include <iostream>
#include <string>
using namespace std;
int main(){
    string paragraph;
    cout << "Enter a paragraph: ";
    getline(cin, paragraph);
    for (int i = 0; i < paragraph.length(); i++){
        if (paragraph[i] >= 'a' && paragraph[i] <= 'z')
             paragraph[i] = paragraph[i] - 'a' + 'A';
    }
    cout << "\nConverted Paragraph:\n"
        << paragraph << endl;
    return 0;
}

// Using Function to convert a sentence or whole paragraphs into Upper Case

#include <iostream>
#include <string>
using namespace std;

string convertToUppercase(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 'a' + 'A'; 
        }
    }
    return text;
}

int main(){
    string paragraph;
    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    string uppercaseParagraph = convertToUppercase(paragraph);

    cout << "\nConverted Paragraph:\n"
         << uppercaseParagraph << endl;

    return 0;
}


*/ 

// Alternative (Using toupper) to convet

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string convertToUppercase(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = toupper(text[i]);
    }
    return text;
}
int main()
{
    string paragraph;
    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    string uppercaseParagraph = convertToUppercase(paragraph);

    cout << "\nConverted Paragraph:\n"
         << uppercaseParagraph << endl;

    return 0;
}