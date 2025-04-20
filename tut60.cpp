#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // // FOR WRITING 
    // string st = "this is me yeahh";
    // ofstream out("tut60.txt");
    // out << st;

    // // FOR READING
    // string st2;
    // ifstream in("tut60.txt");
    // getline(in, st2);
    // cout<<st;
    ofstream out("tut60.txt");
    string name;
    cout<<"Enter the name : "<<endl;
    cin>>name;
    out<<name+" is my name";
    out.close();

    ifstream in("tut60.txt");
    string content;
    getline(in,content);
    cout<<"content of the file is : "<<content;

    return 0;
}