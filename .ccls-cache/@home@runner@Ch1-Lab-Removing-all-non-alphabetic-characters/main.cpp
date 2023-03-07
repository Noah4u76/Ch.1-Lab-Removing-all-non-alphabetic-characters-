//
// File: main.cpp
// Description: Removing all non-alphabetic characters
// Created: Sun. Feb 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//
#include <iostream>
using namespace std;

string RemoveNonAlpha(string userString) {
  string newString = "";
  // find the string length
  int stringLength = userString.length();
  // using the loop to iterate over the string
  for (int i = 0; i < stringLength; i++) {
    // using ASCII codes to search for all possible alphabets
    if (int(userString[i] >= 65) && int(userString[i] <= 121)) {
      newString += userString[i];
    }
  }
  return newString;
}

int main() {
  // user inputs
  string a;
  getline(cin, a);

  cout << RemoveNonAlpha(a) << endl;

  return 0;
}
