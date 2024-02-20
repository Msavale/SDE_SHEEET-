#include <iostream>
#include <math.h>

using namespace std;

int main(void){
    int n;
    int rem=0,rev=0;
    cout<<"entre number ";
    cin>>n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
      cout<<"reverse number is "<<rev;
      return 0;
}