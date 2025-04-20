#include<iostream>
using namespace std;
class complex;

class calculator{
    int add(int a,int b){
    return a+b;
}
int sumrealcomplex(complex ,complex );
int sumcompcomplex(complex ,complex );
};
class complex{
    int a;
    int b;
friend class calculator;
    public:
    void setnumber(int a1,int b1){
        a=a1;
        b=b1;
    }
    void printnumber(){
        cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
    }
};

int calculator::sumrealcomplex(complex o1,complex o2){
    return (o1.a+o2.a);
}
    int calculator::sumcompcomplex(complex o1,complex o2){
    return (o1.b+o2.b);
}
int main(){
    complex o1,o2;
    o1.setnumber(7,8);
    o2.setnumber(6,8);

    calculator calc;
    int res = calc.sumrealcomplex(o1,o2);
        cout<<"the sum of real number is = "<<res<<endl;
    
 int resc = calc.sumcompcomplex(o1,o2);
        cout<<"the sum of comp number is = "<<resc<<endl;
    
return 0;
}