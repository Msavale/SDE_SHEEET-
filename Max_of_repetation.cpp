#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  
  int n;
  cout<<"entre the size of the array";
  int arr[n] ;
  cout<<"Entre elements of array";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  // Create an unordered_map to store the frequency of each element
  unordered_map<int, int> freq;
  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }

  // Find the element with the maximum frequency
  int maxFreq = 0;
  int maxFreqElement;
  for (auto it = freq.begin(); it != freq.end(); it++) {
    if (it->second > maxFreq) {
      maxFreq = it->second;
      maxFreqElement = it->first;
    }
  }

  // Print the maximum frequency and the element with the maximum frequency
  cout << "The maximum frequency is: " << maxFreq << endl;
  cout << "The element with the maximum frequency is: " << maxFreqElement << endl;

  return 0;
}