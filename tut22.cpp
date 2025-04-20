// #include<iostream>
// #include<string>
// using namespace std;

// class binary{

//      private:
//     string s;
    

//     public:
//     void read(void);
//     void chk_bin(void);
//      void ones_compliment(void);
//      void display(void);
//      void show(void);
// };

// void binary::read(void){
//     cout<<"Enter a Binary Number = ";
//     cin>>s;
// }
// //
// void  binary::chk_bin(void){
//     for(int i=0 ; i< s.length() ; i++){

//         if(s.at(i)!='0'  && s.at(i)!='1'){
    
//     cout<<"Incorrect Binary Format"<<endl;
//     exit (0) ;
//         }}}

// void  binary::ones_compliment(void){
// for(int i=0 ; i< s.length() ; i++){

//         if(s.at(i)=='0')
//         {
//             s.at(i)='1';
// }
//     else{
//         s.at(i)='0';
//     }
// }
// }
// void  binary::display(void){
//     cout<<endl<<"Displaying your binary number = ";
    
//     for(int i=0 ; i< s.length() ; i++){
//         cout<<s.at(i);
// }
// }
// void  binary::show(void){
//     cout<<endl<<"Binary number's ones compliment = ";
    
//     for(int i=0 ; i< s.length() ; i++){
//         cout<<s.at(i);
// }
// }
// int main(){
//     binary b;
//     b.read();
//     b.chk_bin();    
//      b.display();
//     b.ones_compliment();
//     b.show();
    

//  return 0;
// }
#include<iostream>
#include<string>
using namespace std;

class binary{

     private:
    string s;
    void chk_bin(void);
    void show(void);
    public:
    void read(void); 
     void ones_compliment(void);
     void display(void);
     
};

void binary::read(void){
    cout<<"Enter a Binary Number = ";
    cin>>s;
}
//
void  binary::chk_bin(void){
    for(int i=0 ; i< s.length() ; i++){

        if(s.at(i)!='0'  && s.at(i)!='1'){
    
    cout<<"Incorrect Binary Format"<<endl;
    exit (0) ;
        }}}

void  binary::ones_compliment(void)
{
    chk_bin();    
for(int i=0 ; i< s.length() ; i++){

        if(s.at(i)=='0')
        {
            s.at(i)='1';
}
    else{
        s.at(i)='0';
    }
}
show();
}
void  binary::display(void){
    cout<<endl<<"Displaying your binary number = ";
    
    for(int i=0 ; i< s.length() ; i++){
        cout<<s.at(i);
}
cout<<endl;
}
void  binary::show(void){
    cout<<endl<<"Binary number's ones compliment = ";
    
    for(int i=0 ; i< s.length() ; i++){
        cout<<s.at(i);
}
}
int main(){
    binary b;
    b.read();
    // b.chk_bin();    
    b.display();
    b.ones_compliment();
    // b.show();
    

 return 0;
}