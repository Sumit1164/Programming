#include<iostream>
#include<cstring>
using namespace std;
class S7T{
protected:
    string title[30];
    float rating;
public: 
    S7T(char *s, float r){
        strcpy(title, s);
        rating = r;
    }
    virtual void display(){}
};
class S7Tbrand : public S7T{
    float videoLength;
public: 
    S7Tbrand(char *s, float r, int vl) : S7T(s,r){
        videoLength = vl;
    }
    void display(){
        cout << "This is an very nice video with title " << title << endl;
        cout << "Rating: " << rating << " Out of 5 star" << endl;
        cout << "The length of this video is: " << videoLength << " minutes" << endl;
    }
};
class S7Tcomp : public S7T{
    int words;
public:
    S7Tcomp(char *s, float r, int w) : S7T(s, r){
        words = w;
    }
    void display(){
        cout << "This is an very nice video with title " << title << endl;
        cout << "Rating: " << rating << " Out of 5 star" << endl;
        cout << "No. of words in this tutorial is: " << words << " words" << endl;
    }
};
int main(){
    string *title = new char[20];
    float rating, vlen;
    int words;
    title = "react tutorial by S7T";
    vlen = 5.70;
    rating 4.8;
    S7Tbrand rjsVideo(title, rating, vlen);
    return 0;
}