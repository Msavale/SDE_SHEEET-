#include <iostream>
using namespace std;
int fun(int arr1[],int arr2[],int num1,int num2){
    int size=0;
    int cnt=0 , c=0;
    if(num1<num2){
        size=num2;
    } else size=num1;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr1[i]==arr2[j] ) cnt++;
            else c++;
        }
    }
    int unio=cnt+c;
    cout<<"the number of insertion is"<<cnt<<endl;
    cout<<"the number of union is"<<c<<endl;

}
int main(void){
    int num1,num2;
    cout<<"entre first arrays size";
    cin>>num1;
    int arr1[num1];
    int arr2[num2];
    cout<<"Entre the elements of first array";
    for(int i=0;i<num1;i++){
        cin>>arr1[i];
    }

    cout<<"Entre the size of Second array";
    cin>>num2;
    cout<<"Entre the elements of second array";
    for(int i=0;i<num2;i++){
        cin>>arr2[i];
    }

    fun(arr1,arr2,num1,num2);


}