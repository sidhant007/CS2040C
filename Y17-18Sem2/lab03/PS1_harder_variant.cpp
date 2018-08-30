#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1e5 + 5;

pair<int, int> A[N];
int pos[N], left_of[N], right_of[N];

void solve() {
  int n;
  cin>>n;
  for(int i = 1; i <= n; i++) {
    cin>>A[i].first;
    A[i].second = i;
    left_of[i] = right_of[i] = i;
  }
  
  left_of[0] = 0, right_of[n + 1] = n + 1;
  sort(A + 1, A + n + 1);

  for(int i = 1; i <= n; i++) pos[A[i].second] = i;

  int current = 0;
  ll tot = 0;

  if((n % 2) == 1) {
    current = (n + 1)/2;
    tot = A[current].first;
  }
  else {
    current = n/2;
    tot = (A[current].first + A[current + 1].first)/2;
  }

  for(int i = n - 1; i >= 1; i--) {
    int remove_pos = pos[i + 1];

    left_of[remove_pos] = left_of[remove_pos - 1];
    right_of[remove_pos] = right_of[remove_pos + 1];

    right_of[left_of[remove_pos] + 1] = right_of[remove_pos];
    left_of[right_of[remove_pos] - 1] = left_of[remove_pos];

    if((i % 2) == 1) {
      if(current >= remove_pos) {
        current = right_of[current + 1]; 
      }
      tot += A[current].first;
    } else {
      if(current <= remove_pos) {
        current = left_of[current - 1];
      }
      int next_of_current = right_of[current + 1];
      tot += (A[current].first + A[next_of_current].first)/2;
    }
  }
  cout<<tot<<'\n';
}

int main() {
  int t;
  cin>>t;
  while(t--)  solve();
  cout<<"By submitting this C++ source code, I declare that it is MY OWN implementation work. I fully understand the underlying algorithm behind the C++ code that I wrote and can prove it to Lab TA if asked.\n";
}
