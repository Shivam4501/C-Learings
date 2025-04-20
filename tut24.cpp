#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void);
    void getdata(void);
    void getcount(void);
};

void Employee::setdata(void)
{
    cout << "enter the id";
    cin >> id;
    count++;
}

void Employee::getdata(void)
{
    cout << "the id of the employee is " << id << " and the employee number is = " << count << endl;
}

void Employee::getcount(void)
{
    cout << "the value of count is = " << count << endl;
}
int Employee::count;
int main()
{
 
     Employee shivam,tanu,manu;
     shivam.setdata();
     shivam.getdata();
     shivam.getcount();

     tanu.setdata();
     tanu.getdata();
     tanu.getcount();

     manu.setdata();
     manu.getdata();
     manu.getcount();
    return 0;
}