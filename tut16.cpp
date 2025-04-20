#include<iostream>
using namespace std;

// int sum(int a ,int b){
//     int c=a+b;
//     return c;
// }
// void swappointer(int* a , int* b){
//  int temp=*a;
//  *a=*b;
//  *b=temp;

// }

// int main(){
//      int num1=5,num2=9;
//     // cout<<"the sum of 6 and 9 is = "<<sum(num1,num2);
//     cout<<"the value of num1 is "<<num1<<endl<<"the value of num2 is "<<num2<<endl;

//     // swap referencevar(num1,num2);
//     swappointer(&num1,&num2);
//     cout<<"the value of num1 is "<<num1<<endl<<"the value of num2 is "<<num2<<endl;

// void swapreferenceVar(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// int main(){

//     int x=7,y=6;
//     cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;
// swapreferenceVar(x,y);
// cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;

// return 0;
// }
// }

int & swapreferenceVar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return b;
}

int main(){

    int x=7,y=6;
    cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;
swapreferenceVar(x,y)=769;
cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;

return 0;
}
