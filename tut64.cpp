#include<iostream>
using namespace std;

class vector{
    public: 
    int*arr;
    int size;
    vector(int m){
        size=m;
        arr=new int[size];
    }
    int dotproduct(vector&v){
        int d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
        
    }
};
int main(){
    vector v1(4);
    v1.arr[0]=4;
    v1.arr[1]=2;
    v1.arr[2]=3;
    v1.arr[3]=4;

    vector v2(4);
    v1.arr[0]=5;
    v1.arr[1]=3;
    v1.arr[2]=2;
    v1.arr[3]=1;

    int a=v1.dotproduct(v2);
    cout<<"the result is : "<<a<<endl;
return 0;
}