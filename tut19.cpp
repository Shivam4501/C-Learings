#include<iostream>
using namespace std;
// int volume(double r,int h){
//     return (3.14*r*r*h);
//   }
// int main(){
//   double r;
//   int h;
  
//     cout<<"Enter the value of radius  "<<endl;
//     cin>>r;

//     cout<<"Enter the value of height  "<<endl;
//  cin>>h;

// cout<<"the volume of cylinder ofradius"<<r<<"and height"<<h<< "is ="<<volume(r,h) ;
// return 0;
// }

double volume(double l, float b){
    return l*b;
}
int main(){
    double l;
     float b;
    cout<<"lenght "<<endl;
    cin>>l;

     cout<<"breadth "<<endl;
    cin>>b;

cout<<"the area of rectangle of lenght "<<l<<" and breadth "<<b<< "is" <<volume(l,b);
return 0;
}
