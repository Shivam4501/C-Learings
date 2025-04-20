#include<iostream>
using namespace std;
class nami{
    public:
    void greet(){
        cout<<"hello ji"<<endl;
    }
};
class sanji{
    public:    
    void greet(){
        cout<<"namaste ji"<<endl;
    }
};
class T:public nami,public sanji{
    public:
    void greet(){
        sanji::greet();
    }
};
int main(){
    nami b;
    b.greet();
    sanji d;
    d.greet();
    T N;
    N.greet();

return 0;
}