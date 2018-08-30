#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

multiset<int> S;

int main() {
  int n, q, v;
  cin>>n; 
  for(int i = 1; i <= n; i++) {
    cin>>v;
    S.insert(v);
  }
  cin>>q;
  while(q--) {
    cin>>v;
    if(v > 0) {
      S.insert(v);
    } else if(v < 0) {
      //S.erase(-v);
      if(S.find(-v) != S.end()) {
        //S.erase(S.find(-v));
        auto it = S.find(-v);
        S.erase(it);
      }
    } else {
      // cout(*(S.end()) - *(S.begin()))<<endl;
      cout<<(*(S.rbegin()) - *(S.begin()))<<endl;
    }
  }
}
