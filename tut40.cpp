#include<iostream>
using namespace std;
class Student{
    protected:
    int Rollnumber;
    public:
    void setRollnumber(int r){
        Rollnumber=r;
    }
    void getRollnumber(){
        cout<<"The Roll number is : "<<Rollnumber<<endl;
    }
};
class Exam:public Student{
    protected:
    float Maths;
    float Physics;
    float English;
    float Hindi;
    float Chemistry;
    public:
    void setnumber(float m1,float m2,float m3,float m4,float m5){
     Maths=m1;
     Physics=m2;
     English=m3;
     Hindi=m4;
     Chemistry=m5;
    }
    void getnumber(){
        cout<<"Marks in Maths is : "<<Maths<<endl;
        cout<<"Marks in Physics is : "<<Physics<<endl;
        cout<<"Marks in English is : "<<English<<endl;
        cout<<"Marks in Hindi is : "<<Hindi<<endl;
        cout<<"Marks in Chemistry is : "<<Chemistry<<endl;
    }
};
class Result:public Exam{
    public:
    void getresult(){
        getRollnumber();
        getnumber();    
    cout<<"The Percentage is : "<<(Maths+Physics+English+Hindi+Chemistry)/5<<endl;
}
};
int main(){
    Result Shivam;
    Shivam.setRollnumber(178);
    Shivam.setnumber(96,90,93,92,88);
    Shivam.getresult();
return 0;
}