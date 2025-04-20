#include<iostream>
using namespace std;

int main(){
int a,factorial=1;


cout<<"Enter the number";
cin>>a;

if(a<0){
    cout<<"there is no factorial of negative integers";

}

else if(a<=1){
    cout<<"the factorial of "<<a<<" is = "<<1;
}

else{
    for(int i=a;i>=2;i--){
        factorial = factorial*i;
    }
    
    cout<<"the factorial of "<<a<< " is = "<<factorial;
}
return 0;
}