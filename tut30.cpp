#include<iostream>
using namespace std;
class bhai{
    int a;
    int b;
    public:

    bhai(int c,int d);
    void printnumber(){   
    cout<<"the value is "<<a<<"+"<<b<<"i"<<endl;
     }
};
bhai:: bhai(int c,int d){
 
    a=c;
    b=d;
}
int main(){
bhai mio(7,8);
mio.printnumber();
return 0;
}