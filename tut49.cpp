#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    void setdata(int a,int b){
        real=a;
        imaginary=b;
    }
    void getdata(void){
        cout<<"The value of a is : "<<real<<endl;
        cout<<"The value b is : "<<imaginary<<endl;
        cout<<"Success YEAHH!!"<<endl;
    }
};
int main(){
    complex*ptr = new complex;
    (*ptr).setdata(45,78);
    (*ptr).getdata();
return 0;
}