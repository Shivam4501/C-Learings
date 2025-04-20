#include <iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=45;
    }
    number(int num){
        a=num;
    }
    number(number&obj){
        cout<<"copy constructor called"<<endl;
        a=obj.a;
        
    }
    void display(){
        cout<<"the vlaue of num is : "<<a<<endl;
    }
};

int main(){
    number x,y,z(78),z2;
    x.display();
    y.display();
    z.display();
    cout<<"Enter"<<endl;
    cout<<"Creating first object"<<endl;
    number z1(z);
    z1.display();

 
z2.display();
    return 0;
}