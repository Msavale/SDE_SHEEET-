#include <iostream>
using namespace std;
int sum(int num1,int num2){
    int sum=num1+num2;
    cout<<"the addition of two number is"<<sum<<endl;
    return 0;
}
int sum(int num1,int num2,int num3){
    int sum=num1+num2+num3;
    cout<<"the addition of three number is"<<sum<<endl;
    return 0;
}
int sum(int num1,int num2,int num3,int num4){
    int sum=num1+num2+num3+num4;
    cout<<"the addition of four number is"<<sum;
    return 0;
}
int main(void){
    int num1,num2,num3,num4;
    cout<<"entre 4 numbers";
    cin>>num1>>num2>>num3>>num4;
    sum(num1,num2);
    sum(num1,num2,num3);
    sum(num1,num2,num3,num4);

    return 0;
}