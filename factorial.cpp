#include <iostream>
using namespace std;

int main(){
   int n;
   int factorial;
   int fact(int n);
   cout<<"entre the number ";
   cin>>n;
   factorial=fact(n);
   cout<<"factorial of number is"<<factorial;


}
int fact(int n){
    if(n<0) return -1;
    if(n==0)  return 1;
    else {
        return(n*fact(n-1));
    }
    
}