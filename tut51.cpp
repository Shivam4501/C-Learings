#include<iostream>
using namespace std;
class Shopitem{
    int id;
    float price;
    public:
    void setdata(int a , float b){
        id=a;
        price=b;
    }
    void getdata(void){
        cout<<"code of this item "<<id<<endl;
        cout<<"price of this item"<<price<<endl;
    }
};
int main(){
    int size = 3;
    Shopitem*pt=new Shopitem[size];
    Shopitem*pttemp=pt;
    int i,p;
    float q;
    for(i=0;i<size;i++){
        cout<<"Enter the id and price of item"<<i+1<<endl;
        cin>>p>>q;
        pt->setdata(p,q);
        pt++;

    }
        for(i=0;i<size;i++){
        cout<<"item number"<<i+1<<endl;
        pttemp->getdata();
        pttemp++;      
    }
return 0;
}