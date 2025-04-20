#include<iostream>
using namespace std;

int main(){
    
        // cout<<"this is me";
      int age;
  cout <<"tell me ur age ";
    cin>>age;
// if((age <18) && (age>0)){
//      cout<<"you are not eligible for party";}

//      else if(age==18){
//      cout<<"you will get a kid pass for a party";}

//      else if(age<1){
//         cout<<"you are not yet born";
//      }
//      else{
//      cout<<"you are eligible for the party";}

switch(age)
{
    case 45:
    cout<<"you are hitman"<<endl;
    break ;

    case 10:
    cout<<"you are goat"<<endl;
     break ;

     case 17:
     cout<<"you are alien"<<endl;
      break ;

      default:
      cout<< "no special cases"<<endl;
      break;

      
}
cout<< "thank you for giving your time"<<endl;
        return 0;    }
  