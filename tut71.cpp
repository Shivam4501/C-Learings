#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter size of your vector" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element to add to this vector : " << endl;
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    // vec1.pop_back();
    // display(vec1);

    vector<int>::iterator iter = vec1.end();
    vec1.insert(iter, 6, 45);
    display(vec1);

    // vector<int> vec1;
    // display(vec1);
    vector<int> vec2(4);
    display(vec2);
    vector<int> vec3(vec2);
    display(vec3);
    // vector<int> vec4(6, 3);
    // display(vec4);

    return 0;
}