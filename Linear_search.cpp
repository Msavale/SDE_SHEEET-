#include <iostream>
#include <math.h>

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


int k=0;
cout<<"entre value for search";
cin>>k;
for(int i=0;i<n;i++){
    if(k==a[i]){
        cout<<"elements at"<<a[i]<<"position";
    }
    
}
cout<<"element isn't in array";
return 0;

}