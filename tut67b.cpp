#include<iostream>
using namespace std;
template<class T>
void swapp(T&a,T&b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
        int x=4,y=5;
        cout<<x<<endl<<y<<endl;
        cout<<endl;
        swapp(x,y);
        cout<<x<<endl<<y<<endl;

return 0;
}