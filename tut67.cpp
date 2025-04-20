#include<iostream>
using namespace std;
template<class t,class u>
float fuavg(t a,u b){
    float avg=(a+b)/2.0;
    return avg;
};
int main(){
    float a;
    a=fuavg(5,6);
    cout<<a<<endl;
    return 0;
}