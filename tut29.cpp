#include<iostream>
using namespace std;
class bhai{
    int a,b;
    public:

    bhai(void){
        a=45;
        b=18;
    }
    void printnumber(){
        cout<<"the number is : "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    bhai tanu;
    tanu.printnumber();

return 0;
}