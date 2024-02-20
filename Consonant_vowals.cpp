#include <iostream>
using namespace std;

int main(void){
    char ch;
    cout<<"entre character ";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        cout<<"the vowel";
    }
    else cout<<"consonant";
    return 0;
}