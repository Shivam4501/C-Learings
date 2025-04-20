#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,26,33,23,12,3};
    // Sorting in ascending order
    sort(arr,arr+6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    // Sorting in descending order
    sort(arr,arr+6,greater<int>());
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}