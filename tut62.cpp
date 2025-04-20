#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("tut60.txt");
    out<<"this is me\n";
    out<<"why is me\n";
    out.close();

    ifstream in;
    string st;
    in.open("tut60.txt");
    while(in.eof()==0){
        getline (in,st);
        cout<<st<<endl;
    }
return 0;
}