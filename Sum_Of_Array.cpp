#include <iostream>
using namespace std;

int main(void){
    int size;
    cout<<"Entre the Size of array";
    cin>>size;
    int num[size];
    cout<<"entre the element of array";
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=num[i];

    }
    cout<<sum;
    
    return 0;
}