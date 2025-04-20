#include<iostream>
using namespace std;

class base1{
    protected:
    int pony;
    public:
    void setbase1(int a){
        pony = a;
    }
};
class base2{
    protected:
    int wild;
    public:
    void setbase2(int a){
        wild = a;
    }
};
class base3{
    protected:
    int bear;
    public:
    void setbase3(int a){
        bear = a;
    }
};
class sho:public base1,public base2,public base3{
    public:
    void show(){
    cout<<"The value of base 1 is : "<<pony<<endl;
    cout<<"The value of base 2 is : "<<wild<<endl;
    cout<<"The value of base 3 is : "<<bear<<endl;
    cout<<"The sum of all bases is : "<<pony+wild+bear<<endl;
}};
int main(){
    sho shivam;
    shivam.setbase1(13);
    shivam.setbase2(45);
    shivam.setbase3(10);
    shivam.show();

    return 0;
}