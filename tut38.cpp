#include <iostream>
using namespace std;
class ball
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void ball::setdata(void)
{
    data1 = 34;
    data2 = 45;
}
int ball::getdata1()
{
    return data1;
}
int ball::getdata2()
{
    return data2;
}
class bat : public ball
{
    int data3;

public:
    void process();
    void display();
};

void bat::process()
{
    data3 = data2 * getdata1();
}
void bat::display()
{
    cout << "data1 : " << getdata1() << endl
         << "data2 : " << data2 << endl
         << "data 3 : " << data3 << endl;
}
int main()
{
    bat boll;
    boll.setdata();
    boll.process();
    boll.display();

    return 0;
}