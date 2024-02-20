#include <iostream>
using namespace std;

int main(void){
    int n,m;
    cout<<"entre number of rows and column of matrix";
    cin>>n>>m;
    int arr[n][m];
    cout<<"entre elemnts of matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"addition of matrix is"<<sum;
}