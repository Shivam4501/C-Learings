#include<iostream>
using namespace std;
class Employee{
    int Id;
    int salary;
static int count;
    public:
    void setId(void){
        cout<<"enter the id of this employee = ";
        cin>>Id;
        count++;
    }
    void getId(void){
        cout<<"the id of this employee is = "<<Id<<endl;
    }
    void getcount(void){
        cout<<"the count of the employee is ="<<count<<endl;
        
    }
};
int Employee::count;
int main(){
    Employee tc[5];
    for(int i=0 ; i<5 ; i++){
       tc[i].setId();
       tc[i].getId();
       tc[i].getcount();
}
}