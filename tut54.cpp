#include <iostream>
using namespace std;
class Baseclass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying base class variables var_base" << var_base << endl;
    }
};
class derived : public Baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying varbase" << var_base << endl;
        cout << "Displaying varderived" << var_derived << endl;
    }
};
int main()
{
    Baseclass *base_class_pointer;
    Baseclass obj_base;
    derived obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 345;
    base_class_pointer->display();

    derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_base = 789;
    derived_class_pointer->var_derived = 78;
    derived_class_pointer->display();
    return 0;
}
