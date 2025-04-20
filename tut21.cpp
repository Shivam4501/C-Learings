#include<iostream>
using namespace std;

// class employee
//   {
//     private:
//     int a,b,c;

//     public:
//     int x,y,z;


//  void setdata(int a1 ,int b1,int c1);

//  void getdata(){

// cout<<"the value of a is " <<a<<endl;
// cout<<"the value of b is " <<b<<endl;
// cout<<"the value of c is " <<c<<endl;
// cout<<"the value of x is " <<x<<endl;
// cout<<"the value of y is " <<y<<endl;
// cout<<"the value of z is " <<z<<endl;
//   }
//   };

// void employee :: setdata(int a1 ,int b1,int c1){
//        a=a1;
//        b=b1; 
//        c=c1;
//        }
// int main(){
// employee shivam;
// shivam.x=45;
// shivam.y=5;
// shivam.z=4;
// shivam.setdata(1,5,6);
// shivam.getdata();
//     return 0;
// }

class details{
private: int a,b,c;
    public:
    int f,g;
   

    void setdata(int a1, int b1,int c1);
    void getdata(){
        cout<<"the number of people tommy has bitten = "<<a<<endl;
        cout<<"the number of people died because of tommy = "<<b<<endl;
        cout<<"total complaints of tommy are = "<<c<<endl;
        cout<<"the breed of tommy is = german shepherd "<<endl;
        cout<<"the colour of tommy is = brown "<<endl;
        cout<<"the weight of tommy is = "<<f<<endl;
        cout<<"the height of tommy is = "<<g<<endl;
    }
};

void details :: setdata(int a1, int b1,int c1){
a=a1;
b=b1;
c=c1;
}

int main(){
     
    details tommy;
    tommy.f=13;
    tommy.g=105;
 

    tommy.setdata(67,5,109);
    tommy.getdata();
cout<<"So,These are the details of Tommy which I think are Important "<<endl;
cout<<"Thank You";
    return 0;
}