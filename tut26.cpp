#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    friend complex sumcomplex(complex o1,complex o2);
    public:
    void setnumber(int u1,int u2){
        a=u1;
        b=u2;
    }
    void printnumber(){
        cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.setnumber(8,9);
    c1.printnumber();
    c2.setnumber(7,6);
    c2.printnumber();
    sum =sumcomplex(c1,c2);
    sum.printnumber();
    return 0;

return 0;
}