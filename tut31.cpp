#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int v,int h){
        a = v;
        b = h;
    }
    complex(int v){
        a = v;
        b = 0;
    }
    void printnumber(){
        cout<<"the number is : "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex sheru;
    sheru.printnumber();

     complex sher(67);
    sher.printnumber();

     complex heru(45,89);
    heru.printnumber();

return 0;
}