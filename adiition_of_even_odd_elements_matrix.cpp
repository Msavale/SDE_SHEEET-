#include <iostream>
using namespace std;
int sumofmatrix(int arr[],int n,int m){

    int evensum=0;
    int oddsum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]%2==0){
                evensum+=arr[i][j];
            } else {
                oddsum+=arr[i][j];
            }

        }
    }
    cout<<"the addition of even elements is"<<evensum<<endl;
    cout<<"the addition of odd elements is"<<oddsum<<endl;

}
int main(void){
    int n,m;
    cout<<"entre number of rows and columns ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"entre elements of matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];

        }
    }
    sumofmatrix(arr,n,m);
    return 0;
}