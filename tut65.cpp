#include<iostream>
using namespace std;
template<class y1,class y2>
class dis{
    y1 a;
    y2 b;
    public:
    dis(y1 x,y2 y){
        a=x;
        b=y;
    }
    void display(void){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main(){
    dis<int , char> sh(45,'c');
    sh.display();
return 0;
}