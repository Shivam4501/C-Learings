#include <iostream>
using namespace std;
int count = 0;
class bhooo
{
public:
    bhooo()
    {
        cout << "this is the time when constructor is called " << count << endl;
        count++;
    }
    ~bhooo()
    {
        cout << "this is the time when destructor is called " << count << endl;
        count--;
    }
};
int main()
{
    // int num;
    // cout<<"entering ";
    cout << "creating first object";
    bhooo n1;
    {
        cout << "Entering the block";
        cout << "creating two more blocks";
        bhooo n2, n3;
        cout << "exiting block";

        cout << "exited";
    }

    return 0;
}