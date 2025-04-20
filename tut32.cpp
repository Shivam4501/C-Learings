#include <iostream>
using namespace std;
class badhiya
{
    int data1, data2, data3;

public:
    badhiya(int a, int b = 89, int c = 87)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printnumber()
    {
        cout << "The value of data 1 ,data2 and data3 are : " << data1 << " , " << data2 << " and " << data3 << endl;
    }
};
int main()
{
    badhiya bhai(45);
    bhai.printnumber();
    return 0;
}