#include <iostream>
using namespace std;

class Baseclass
{
public:
    int varbase = 1;
    virtual void display()
    {
        cout << "the varbase is  " << varbase << endl;
    }
};
class derivedclass : public Baseclass
{
public:
    int varderived = 2;
    void display()
    {
        cout << "the varbase is " << varbase << endl;
        cout << "the varderived is " << varderived << endl;
    }
};
int main()
{
    Baseclass *baseclasspointer;
    Baseclass objbase;
    derivedclass objderived;

    baseclasspointer = &objderived;
    baseclasspointer->display();
    return 0;
}