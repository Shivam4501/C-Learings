#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base 1 constructor called" << endl;
    }
    void printnumber(void)
    {
        cout << "value of data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base 2 constructor called" << endl;
    }
    void printnumberr(void)
    {
        cout << "value of data2 is " << data2 << endl;
    }
};
class derived : public base2, public base1
{
    int derived1;
    int derived2;

public:
    derived(int a, int b, int c, int d) : base2(b),  base1(a)
    {
        derived1 = c;
        derived2 = d;
    }
    void print(void)
    {
        cout << "value of derived 1 is : " << derived1 << endl;
        cout << "value of derived 1 is : " << derived1 << endl;
    }
};

int main()
{
    derived shivam(10, 45, 17, 9);
    shivam.printnumber();
    shivam.printnumberr();
    shivam.print();
    return 0;
}
