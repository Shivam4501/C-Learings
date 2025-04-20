#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid array size";
        return 1;
    }

    int *arr = new int[n];
    int *farr;
    int carry = 1;

    cout << "Enter the initial array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i] + carry;
        carry = arr[i] / 10;
        arr[i] = arr[i] % 10;
    }

    int farrSize = n;
    if (carry == 1)
    {
        farrSize = n + 1;
        farr = new int[farrSize];
        farr[0] = 1;
        for (int i = 0; i < n; i++)
        {
            farr[i + 1] = arr[i];
        }
    }
    else
    {
        farr = new int[farrSize];
        for (int i = 0; i < n; i++)
        {
            farr[i] = arr[i];
        }
    }

    cout << "Final Array is: ";
    for (int i = 0; i < farrSize; i++)
    {
        cout << farr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] farr;
    arr = nullptr;
    farr = nullptr;

    return 0;
}