#include<iostream>
using namespace std;

int sum(int a,int b){
     int c=a+b;
    // return c;
}
    void g();

int main(){
    int num1, num2;
    cout<<"enter the value of first number";
    cin>>num1;

    cout<<"enter the value of second number";
    cin>>num2;

    cout<<sum(num1 ,num2);
g();
// return 0;
}
void g(){
    cout<<"\nhello good morning";
}