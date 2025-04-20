#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 45.0;
    }
    Employee(){};
};
class programmer : public Employee
{
public:
    int languagecode;
    programmer(int inpId)
    {
        languagecode = 67;
        id = inpId;
    }
    void getdata()
    {
        cout << "The Id is : " << id << endl;
    }
};
int main()
{
    Employee tanu(78), manu(79);
    cout << tanu.salary << endl;
    cout << manu.salary << endl;

    programmer tann(89);
    cout << tann.languagecode << endl;
    cout << tann.id << endl;
    tann.getdata();
    return 0;
}