#include<iostream>
using namespace std;
class Student{
    protected:
    int roll;
    public:
    void setroll(int r){
        roll = r;
    }
    void printnumber(){
        cout<<"Your roll number is : "<<roll<<endl;
    }
};
class Exam : virtual public Student{
    protected:
    float maths,physics;
    public:
    void setmarks(float m1,float m2){
        maths = m1;
        physics = m2;
    }
    void printmarks(){
        cout<<"Maths marks : "<<maths<<endl<<"Physics marks : "<<physics<<endl;
    }
};
class Sports : virtual public Student{
    protected:
    float PT;
    public:
    void setscore(float a){
        PT = a;
    }
    void printscore(){
        cout<<"Your PT score is : "<<PT<<endl;
    }
};
class Result : public Exam,public Sports{
    private:
    float total;
    public:
    void show(){
    total = maths+physics+PT;
     printnumber();
     printmarks();
     printscore();
    cout<<"Your total score is : "<<total<<endl;
}
};
int main(){
    Result Shivam;
    Shivam.setroll(178);
    Shivam.setmarks(92,95);
    Shivam.setscore(9);
    Shivam.show();
return 0;
}