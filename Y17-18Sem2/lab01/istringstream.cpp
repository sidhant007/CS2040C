#include <bits/stdc++.h>
using namespace std;

// Aim of the code is to take multiple lines of input which ends at EOF.
// where each input is some integers seperated by spaces.
// so we aim to parse out all these integers in the variable c.

int main() {
  string s;
  while(getline(cin, s)) {
    istringstream b(s);
    int c;
    while(!b.eof()) {
      b >> c;
      cout<<c<<endl;
    }
  }
}
