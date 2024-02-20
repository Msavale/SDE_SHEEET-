#include <iostream>
using namespace std;
void numswap(int arr[],int size){
      
      for(int i=0;i<size;i+2)
      {
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
      }

}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];

    }
    cout<<endl;
}
int main(void){
    int size;
    cout<<"entre size of array";
    cin>>size;
    int arr[size];
    cout<<"entre elements of array";
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    
    numswap(arr,size);
    printarr(arr,size);

}