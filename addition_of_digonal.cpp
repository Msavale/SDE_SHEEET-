#include <iostream>
using namespace std;

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
     
     int sum=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                cout<<"the digonal values are"<<arr[i][j]<<endl;
            sum+=arr[i][j];
            }
        }
     }
     
     cout<<"the addition of digonal is"<<sum;
}