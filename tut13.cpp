#include<iostream>
using namespace std;

int main(){
// int marks[4] ={78,79,57,90};
int marks[3];
marks[0]=78;
marks[1]=79;
marks[2]=70;


 cout<<"the value of marks are"<<endl;

// for(int i=0;i<3;i++){
//     cout<<"the value of "<<i<<" is : "<<marks[i]<<endl;
// }

// cout<<"the value of 0 is ="<<marks[0]<<endl;
// cout<<"the value of 1 is ="<<marks[1]<<endl;
// cout<<"the value of 2 is ="<<marks[2]<<endl;

// cout<<"the value of 0 is = "<<marks[0]<<endl;
// cout<<"the value of 1 is = "<<marks[1]<<endl;
// cout<<"the value of 2 is = "<<marks[2]<<endl;
// cout<<"the value of 3 is = "<<marks[3]<<endl;

// int i=0;
// while(i<3){
//     cout<<"the value of marks "<<i<<" are = "<<marks[i]<<endl;
//     i++;
// }

// }

// int i = 0;
// do{
//     cout<<"the value of marks "<<i<<" is = "<<marks[i]<<endl;
//     i++;

// }while(i<3);
int* p = marks;

for(int i=0;i<3;i++){
    cout<<"the value of"<<i<<"is : "<<*p<<endl;
}

return 0;
}