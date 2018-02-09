#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> S;

  S.push(5);
  S.push(3);
  S.push(4);
  S.push(2);

  //S.top()
  cout<<"The current top - most element is --> "<<S.top()<<endl;

  cout<<"The size of the stack is --> "<<(int)S.size()<<endl;

  while(!S.empty()) { //Looping while stack is NOT empty.
    cout<<S.top()<<" "; //printing the elements from top to bottom.
    S.pop(); //popping the current top.
  }
  cout<<endl;
}
