#include <iostream>
#include <cstring>
using namespace std;
class S7T
{
protected:
    string title;
    float rating;

public:
    S7T(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // 5 Star (Do nothing) function ----> Pure virtual function 
};
class S7Tbrand : public S7T
{
    float videoLength;

public:
    S7Tbrand(string s, float r, float vl) : S7T(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an very nice video with title " << title << endl;
        cout << "Rating: " << rating << " Out of 5 star" << endl;
        cout << "The length of this video is: " << videoLength << " minutes" << endl;
    }
};
class S7Tcomp : public S7T
{
    int words;

public:
    S7Tcomp(string s, float r, int w) : S7T(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "This is an very nice video with title " << title << endl;
        cout << "Rating: " << rating << " Out of 5 star" << endl;
        cout << "No. of words in this tutorial is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    title = "react tutorial by S7T";
    vlen = 5.75;
    rating = 4.89;
    S7Tbrand rjsVideo(title, rating, vlen);
    // rjsVideo.display();

    title = "Python tutorial for begginners";
    words = 22198433;
    rating = 4.99;
    S7Tcomp py(title, rating, words);
    // py.display();

    S7T *tut[2];
    tut[0] = &rjsVideo;
    tut[1] = &py;
    tut[0]->display();
    tut[1]->display();
    return 0;
}