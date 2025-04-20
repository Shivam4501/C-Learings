#include <iostream>
using namespace std;
class Bankdeposit
{
    int principal;
    int years;
    float Interestrate;
    float returnvalue;

public:
    Bankdeposit(){};
    Bankdeposit(int p, int y, float r)
    {
        principal = p;
        years = y;
        Interestrate = r;
        returnvalue = principal;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + Interestrate);
        }
    }
    Bankdeposit(int p, int y, int R)
    {
        principal = p;
        years = y;
        Interestrate = float(R) / 100;
        returnvalue = principal;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + Interestrate);
        }
    }
    void show()
    {
        cout << "Principal amount was " << principal << " Rs and after " << years << " years.Your amount will be : " << returnvalue << endl;
    }
};
int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p;
    int y;
    float r;
    int R;

    // cout << "Enter the values : ";
    cout<<"Enter the amount : ";
    cin >> p  ;
    cout<<"For how many years,you want to invest : ";
    cin >> y  ;
    cout<<"Interest rate : ";
    cin >> r ;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    // cout << "Enter the values : ";
     cout<<"Enter the amount : ";
    cin >> p  ;
    cout<<"For how many years,you want to invest : ";
    cin >> y;
    cout<<"Interest rate : ";
    cin >> R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();
    return 0;
}