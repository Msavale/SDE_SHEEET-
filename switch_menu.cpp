#include <iostream>
using namespace std;

int main(void){
    char ch;
    cout<<"entre chartecter ";
    cin>>ch;
    switch (ch)
    {
    case 'a': cout<<"vowel is a";
        break;
    
    case 'e': cout<<"vowel is e";
        break;

    case 'i': cout<<"vowel is i";
        break;

    case 'o': cout<<"vowel is o";
        break; 

    case 'u': cout<<"vowel is u";
        break;       
    default: cout<<"it is consonant ";
        
        break;
    }
}