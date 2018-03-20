// Compound Words

#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  unordered_set<string> theWords;
  set<string> all;
  while (cin >> w) theWords.insert(w); // O(number of words * average length of each word * small constant due to hashtable)
  for (auto &i : theWords) {  
    for (auto &j : theWords) {
      if (i == j) continue; // have to be different
      all.insert(i+j);
      all.insert(j+i);
    }
  }
  for (auto &k : all) cout << k << endl;
  // Try to do the correct complexity analysis.
  // How to do this question using O(N) space ?? (This week challeneg question)
  return 0;
}

