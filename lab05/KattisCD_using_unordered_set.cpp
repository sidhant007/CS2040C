#include <bits/stdc++.h>
using namespace std;

int i, N, M, ID, ans; // N & M are up to 1M each
unordered_set<int> Jack; // remove the word unordered_ to make it slower

int main() {
  while (scanf("%d %d", &N, &M), (N || M)) {  // Q - why does this work ??
    Jack.clear();
    for (i = 0; i < N; i++) {
      scanf("%d", &ID);
      Jack.insert(ID);
    }
    for (ans = i = 0; i < M; i++) { // compare Jill's IDs with Jack's in O(N)
      scanf("%d", &ID);
      if (Jack.find(ID) != Jack.end()) ans++;
    }
    printf("%d\n", ans);
  }
  return 0;
}
