#include <iostream>
#include <math.h>

using namespace std;

int main(void){

int n;
cout<<"entre size of array";
cin>>n;
int Array[n];
cout<<"entre the values of array";
for (int i = 0; i < n; i++)
{
    cin>>Array[i];
}

cout<<"elements of array";
for(int i=0;i<n;i++){
    cout<<Array[i];
    cout<<endl;
}
return 0;

}