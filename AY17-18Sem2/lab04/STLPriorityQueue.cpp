#include <bits/stdc++.h>
using namespace std;

struct special_int {
  int x;
  special_int(int _x) {
    x = _x;
  }
  bool operator < (const special_int& b) const {
    return x > b.x;
  }
};

int main() {
  priority_queue<int> pq1;
  pq1.push(3), pq1.push(5), pq1.push(7), pq1.push(1);
  cout<<"Current top is --> "<<pq1.top()<<endl;
  pq1.pop();
  cout<<"After popping the current top, the new top is --> "<<pq1.top()<<endl;
  while(!pq1.empty())  pq1.pop();

  priority_queue<int, vector<int>, greater<int> > pq2;
  pq2.push(3), pq2.push(5), pq2.push(7), pq2.push(1);
  cout<<"Current top is --> "<<pq2.top()<<endl;
  pq2.pop();
  cout<<"After popping the current top, the new top is --> "<<pq2.top()<<endl;
  while(!pq2.empty()) pq2.pop();

  priority_queue<special_int> pq3; 
  pq3.push(special_int(3)), pq3.push(special_int(5)), pq3.push(special_int(7));
  pq3.push(special_int(1));
  cout<<"Current top is --> "<<pq3.top().x<<endl;
  pq3.pop();
  cout<<"After popping the current top, the new top is --> "<<pq3.top().x<<endl;
  while(!pq3.empty()) pq3.pop();

  return 0;
}
