#include<iostream>
using namespace std;

// inline product(int a,int b){
    

//     return a*b;
// }
// int strlen(const char *s){

// }

float moneyreceived(int currentmoney,float factor=1.04){
   return currentmoney * factor;}
int main(){
    int money = 10000;

    cout<<"If you have "<<money<<" ,u will get "<<moneyreceived(money) <<"Rs back in one year"<<endl;
    cout<<"For VIP :If you have "<<money<<" ,u will get "<<moneyreceived(money,1.2)<<"Rs back in one year";
    // int a, b;
// cout<<"enter the value of a and b =";

    
//     cin>>a>>b;

// cout<<"the product of a and b is ="<<product(a,b)<<endl;
// cout<<"the product of a and b is ="<<product(a,b)<<endl;
// cout<<"the product of a and b is ="<<product(a,b)<<endl;
// cout<<"the product of a and b is ="<<product(a,b)<<endl;
// cout<<"the product of a and b is ="<<product(a,b)<<endl;
// cout<<"the product of a and b is ="<<product(a,b)<<endl;
// cout<<"the product of a and b is ="<<product(a,b)<<endl;
// cout<<"the product of a and b is ="<<product(a,b)<<endl; 
// cout<<"the product of a and b is ="<<product(a,b)<<endl;
// cout<<"the product of a and b is ="<<product(a,b)<<endl;
    return 0 ;
}