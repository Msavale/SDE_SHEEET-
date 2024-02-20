#include <iostream>
using namespace std;
int sum(int a,int b){
    int sum= a+b;
    cout<<"the sum is"<<sum;
    return 0;
}
int main(void){
    int a,b;
    cout<<"entre two numbers";
    cin>>a>>b;
    sum(a,b);
    return 0;
}