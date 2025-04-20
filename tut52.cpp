#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void setdata(int a){
        this->a=a;
    }
    void getdata(){
        cout<<"a is : "<<a<<endl;
    }
};
int main(){
    A a;
    a.setdata(45);
    a.getdata();
return 0;
}