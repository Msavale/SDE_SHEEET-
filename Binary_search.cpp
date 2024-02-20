#include <iostream>
using namespace std;

int main(void){
    int n;
cout<<"entre size of array";
cin>>n;
int a[n];
cout<<"entre the values of array";
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}

cout<<"elements of array";
for(int i=0;i<n;i++){
    cout<<a[i];
    cout<<endl;
}

// sorting the array
for(int i=0;i<n;i++){
    for(int j=1;j<n;j++){
       if(a[i]>a[j]){
        int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
       }
       
    }
}
cout<<"sorted array is";
for(int i=0;i<n;i++){
    cout<<a[i];
}
return 0;
}