#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<"   ";
    }
}
int main(){
    list<int>OBITO;

    OBITO.push_back(45);
    OBITO.push_back(4);
    OBITO.push_back(5);
    OBITO.push_back(455);
    OBITO.push_back(47);
    OBITO.push_back(451);

    display(OBITO);
    cout<<endl;
    OBITO.remove(5);
    display(OBITO);
    
    cout<<endl;
    OBITO.sort();
    display(OBITO);

    // cout<<endl;
    // OBITO.pop_back();
    // display(OBITO); 
    // cout<<endl;
    // OBITO.pop_front();
    // display(OBITO); 
    // cout<<endl;

    // list<int>list2;
    // list<int> :: iterator it=list2.begin();

    // *it=45;
    // it++;
    // *it=5;
    // it++;
    // *it=4;
    // it++;
    // display(list2);
    return 0;
}