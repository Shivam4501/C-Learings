#include <iostream>
using namespace std;
void func(int a)
{
    cout << "first" << a << endl;
}
template <class T>
void func(T a)
{
    cout << "templatised " << a << endl;
}
int main()
{
    func(45);
    func<int>(67);
    //  Exact match takes highest priority
    return 0;
}