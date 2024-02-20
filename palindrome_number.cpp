#include <iostream>
#include <string>

using namespace std;
int main(void){
    int n;
    int num=0;
    int rev=0;
    cout<<"entre number";
    cin>>n;
    num=n;
    while(n!=0){
         rev = rev * 10 + n % 10;
             n /= 10;
    }
    
    if(num==rev)
    cout<<"the number is palindrom";
    else cout<<"number isn.t palindrom";
    return 0;
}