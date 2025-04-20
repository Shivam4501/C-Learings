#include <iostream>
using namespace std;
class point
{
    int a;
    int b;

public:
    point(int c, int d);
    void printnumber()
    {
        cout << "the point is (" << a << "," << b << ")" << endl;
    }
};
point::point(int c, int d)
{
    cout << "Enter X ordinate : ";
    cin >> c;
    cout << "Enter Y ordinate : ";
    cin >> d;

    a = c;
    b = d;
}
int main()
{
    point p;
    p.printnumber();
    point q;
    q.printnumber();
    return 0;
}