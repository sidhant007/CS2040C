#include <bits/stdc++.h>
using namespace std;

#define MAX_NM 1000010

int i, j, N, M, ans, Jack[MAX_NM], Jill[MAX_NM]; // N & M are up to 1M each

int main() {
  while (scanf("%d %d", &N, &M), (N || M)) {
    for (i = 0; i < N; i++) scanf("%d", &Jack[i]);
    for (j = 0; j < M; j++) scanf("%d", &Jill[j]);
    ans = i = j = 0;
    while (i < N && j < M) { // O(min(N, M)) - Same as doing set_intersection
           if (Jack[i] == Jill[j]) i++, j++, ans++; // ans++ and advance both pointers
      else if (Jack[i] >  Jill[j]) j++; // advance Jill's pointer
      else                         i++; // advance Jack's pointer
    }
    printf("%d\n", ans);
  }
  return 0;
}
