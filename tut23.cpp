#include<iostream>
using namespace std;

class Shop{
    int itemid[100];
    int itemprice[100];
    int counter;
public:
    
    void initCounter(void) {counter = 0};
    void setprice(void);
    void displayPrice(void);

};

void shop::setprice(void){
    cout<<"enter the id of the item = "<<counter + 1<<endl;
    cin>>itemid[counter];
    cout<<"enter the price of the item = ";
    cin>>itemprice[counter];
    counter++;
}

void shop::displayPrice(void){
    for(int i=0;i<counter;i++){
        cout<<"the price of of item of id no."<<itemid[i]<<"is"<<itemprice[i]<<endl;
    }
}


int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayPrice();

    return 0;
}