#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
  // Check if the string is empty or has only one character
  if (str.length() <= 1) {
    return true;
  }

  // Compare the first and last characters of the string
  if (str[0] != str[str.length() - 1]) {
    return false;
  }

  // Recursively check the remaining substring
  return isPalindrome(str.substr(1, str.length() - 2));
}

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;

  if (isPalindrome(str)) {
    cout << str << " is a palindrome." << endl;
  } else {
    cout << str << " is not a palindrome." << endl;
  }

  return 0;
}