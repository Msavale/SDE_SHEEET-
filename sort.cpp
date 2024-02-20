#include <iostream>
using namespace std; 

int Bubble(int arr[]){
    for(int i=0;i<5;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    cout<<"sorted array is";
    for(int i=0;i<5;i++){
        cout<<arr[i];
        cout<<endl;
        
    }
}

using namespace std;
int main(void){
    int arr[5];
    cout<<"entre element os array";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    Bubble(arr);
    return 0;
}