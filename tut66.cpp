#include <iostream>
using namespace std;
template <class t1 = int, class t2 = char, class t3 = double>
class jj
{
    t1 a;
    t2 b;
    t3 c;

public:
    jj(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};
int main()
{
    jj<> ov(45, 'u', 4.5555);
    ov.display();

    cout << endl;

    jj<int, float, char> ur(45, 45.25, 'x');
    ur.display();

    return 0;
}