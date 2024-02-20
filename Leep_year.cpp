#include <iostream>
using namespace std;

int main(void){
    int year;
    cout<<"entre the year";
    cin>>year;
    if(year%4==0 && year%100 && year%400){
        cout<<"Leep year";
    }
    else cout<<"not a Leep year";
    return 0;
}