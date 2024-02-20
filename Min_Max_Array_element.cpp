#include<iostream>
using namespace std;

int main() {

    int size;
    cout<<"entre the size of array";
    cin >> size;

    int a[size];
     cout<<"entre the elements of array";
    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> a[i];
    }
     
     for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements
            if (a[j] > a[j + 1]) {
                // Swap if they are in the wrong order
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
     for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
     }

      cout<<"maxmimum element of array is "<<a[0];
      cout<<"minimum element of array is "<<a[size-1];
     return 0;
    
}