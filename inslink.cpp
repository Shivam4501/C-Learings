#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
void Insertatbeginning(node*& head,int value){
    node*newnode=new node();
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void displaylist(node*head){

    node*current=head;
    while(current!=nullptr){
        cout<< current->data <<"  ";
        current = current->next; 
    }
    cout<<endl;
}
int main(){
    node*head=nullptr;
    Insertatbeginning(head,4);
    Insertatbeginning(head,3);
    Insertatbeginning(head,2);
    Insertatbeginning(head,1);
    cout<<"linked list after insertion at beginning"<<endl;
    displaylist(head);
    cout<<"COMPLETED YEAHH !!"<<endl;
    return 0;
}