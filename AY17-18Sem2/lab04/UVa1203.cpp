#include <bits/stdc++.h>
using namespace std;

typedef tuple<int, int, int> iii;

priority_queue<iii, vector<iii>, greater<iii> > pq;

int main() {
  string dump;
  int a, b, k;
  while(true) {
    cin>>dump;
    if(dump == "#") break;
    cin>>a>>b;
    pq.push(make_tuple(b, a, b));
  }
  cin>>k;
  while(k--) {
    iii tmp = pq.top();
    pq.pop();
    cout<<get<1>(tmp)<<endl;
    pq.push(make_tuple(get<0>(tmp) + get<2>(tmp), get<1>(tmp), get<2>(tmp)));
  }
}
