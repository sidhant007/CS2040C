#include <bits/stdc++.h>
using namespace std;

int main() {
  deque<int> DQ;

  DQ.push_back(5);

  DQ.push_front(-1);

  DQ.push_back(3);

  DQ.push_front(-2);

  DQ.push_back(4);

  cout<<"The current front element is --> "<<DQ.front()<<endl;
  cout<<"The current back element is --> "<<DQ.back()<<endl;
  cout<<"The size of the deque is --> "<<(int)DQ.size()<<endl;
  
  while((int)DQ.size() > 3) {
    cout<<"Current back is --> "<<DQ.back()<<endl;
    DQ.pop_back();
  }
  while(!DQ.empty()) {
    cout<<"Current front is --> "<<DQ.front()<<endl;
    DQ.pop_front();
  }
}
