#include <bits/stdc++>
#include <iostream>
using namespace std; 
void sort012(int *arr, int n)
{
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {

        if (arr[mid] == 0) {
            swap(arr[low++], arr[mid++]);
        }

        else if (arr[mid] == 1) {
            mid++;
        }

        else {
            swap(arr[mid], arr[high]);
            high--;
        }

    }

    return;
}

int main(void){
    int n;
    count<<"entre size of array";
    cin>>n;
    int arr[n];
    cout<<"entre elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(int *arr, int n);
}