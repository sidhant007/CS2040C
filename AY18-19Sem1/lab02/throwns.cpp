// PS: THERE IS A MISSING PART INDICATED WITH "LAST PART"
// SUBMITTING THIS FILE VERBATIM TO KATTIS SHOULD BE WA

// Game of Throwns
// stack simulation, we use stack of positions of the egg holder to help us solve this problem

// this is the public discussion of solving
// https://open.kattis.com/problems/throwns
// (Sat 24 March 2018, 10.03 - approx 10.51)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); // I hope C++ users don't get accidental TLE due to missing this line
  int n, k; // 1 <= n <= 30 (number of students), 1 <= k <= 100 (number of commands from the teacher)
  cin >> n >> k; // just read

  // MAJOR HINT of the required data structure
  stack<int> t; // stack t contains the stack of positions of the egg holder (so that we can undo later)
  t.push(0); // Child 0 always starts with the egg

  while (k--) { // now we throw the eggs around (or undo), O(k*(m+1)) = O(km), or O(kn), as m <= n in this problem (Daenerys never has the kids undo beyond the start of the game)
    int m;
    string cmd; // we do not really know what comes next, is it a command "undo m" or a single integer, we read as string first
    cin >> cmd;
    if (cmd == "undo") { // if we see a word "undo", then the format will be "undo m"
      cin >> m; // so we read m next

      // to undo last m commands, we...
      while (m--) // simply pop from the last m egg positions (top m items of the stack), O(m) here
        t.pop();
    }
    else { // this "cmd" is actually integer m :o
      m = stol(cmd); // there is a built-in command to convert string to integer

      // when the teacher gives you a command m (m can be negative)
      t.push((t.top()+m)%n); // push (the updated position of the egg, WRAP AROUND - remember hashing integer?) to the top of the stack, O(1) here
    }
  }

  // now what should be printed out at the end....
  int ans = t.top(); // this should be the final position of the egg
  // LAST PART START: erm... still WA? hm?? what should you do??

  if(ans < 0)
    ans += n;

  // LAST PART END
  cout << ans << endl;
  return 0;
}
