#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
int a;
    cout<<"Enter the number : ";
    cin>>a;

    cout<<"The factorial of "<<a<<" is : "<<factorial(a);
  
// int fib(int n){
// if(n<=1){
//     return 1;
// }
//     return fib(n-2)+fib(n-1);
// }
// int main(){
//     int a;
//     cout<<"Enter the number = ";
//     cin>>a;

//     cout<<"The value at term "<<a<<" of Fibonacci series is : "<<fib(a);

    return 0;
}