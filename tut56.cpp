#include<iostream>
using namespace std;
class cwh{
 protected:
    string title;
    float rating;
    public:
    cwh(string s,float r){
        title = s;
        rating = r;
    }
    virtual void display(){}
};
// FOR VIDEO
class cwhvid:public cwh{
    float videolength;
    public:
    cwhvid(string s,float r,float v1):cwh(s,r){
        videolength=v1;
    }
    void display(){
        cout<<"the title of video is : "<<title<<endl;
        cout<<"the rating of video is : "<<rating<<endl;
        cout<<"the length of video is : "<<videolength<<endl;
    }
};
// FOR TEXT
class cwhtxt:public cwh{
    int words;
    public:
    cwhtxt(string s,float r,int wc):cwh(s,r){
        words=wc;
    }
    void display(){
        cout<<"the title of text is : "<<title<<endl;
        cout<<"rating : "<<rating<<endl;
        cout<<"words : "<<words<<endl;
    }

};
int main(){
    string title;
    float rating,videolength;
    int words;

    // for video
    title = "django tutorial";
    videolength=4.5;
    rating = 4.9;
    cwhvid djvid(title ,rating ,videolength);

    // for text
    title="django tut text";
    words=467;
    rating=4.09;
    cwhtxt djtext(title,rating,words);

    cwh*tuts[2];

    tuts[0]=&djvid;
    tuts[1]=&djtext;

    tuts[0]->display();
    tuts[1]->display();
return 0;
}