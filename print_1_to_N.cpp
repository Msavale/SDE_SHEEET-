#include <iostream>
using namespace std;
int print(int num){
if (num > 0) {
    print(num - 1);
    cout << num  << " ";
  }


}
int main(void){
    int num;
    cout<<"entre the number";
    cin>>num;
    print(num);
    return 0;
}