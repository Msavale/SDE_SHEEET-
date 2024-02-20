#include <iostream>
using namespace std;

int main(void){
    int n;
    cout<<"entre size of matrix";
    cin>>n;
    int matrix[n][n];
    cout<<"entre the elements of matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[n][n];
        }
    }
    int upp_add=0;
    int low_add=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){ low_add+matrix[i][j];}
            if(i<=j) {upp_add+matrix[j][j];}
        }
    }
    cout<<"addition of upper tringle of matrix is"<<upp_add<<endl;
    cout<<"addition of lower tringle of matrix is"<<low_add<<endl;
}