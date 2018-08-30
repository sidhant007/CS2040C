#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> Q;

  Q.push(5);
  Q.push(3);
  Q.push(4);
  Q.push(2);

  cout<<"The current front element is --> "<<Q.front()<<endl;
  cout<<"The size of the queue is --> "<<(int)Q.size()<<endl;

  while(!Q.empty()) { //Looping while queue is NOT empty.
    cout<<Q.front()<<" "; //printing the elements from top to bottom.
    Q.pop(); //popping the current top.
  }
  cout<<endl;
}
