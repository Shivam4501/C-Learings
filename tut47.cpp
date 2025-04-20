#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    public:
    test(int num1,int num2):a(num1),b(num2){
        cout<<"Value of a is : "<<a<<endl;
        cout<<"Value of b is : "<<b<<endl;
    }
};
int main(){
    test ass(45,10);
return 0;
}