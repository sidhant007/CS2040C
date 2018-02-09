#include <bits/stdc++.h>
using namespace std;

/*
void print(list<int> L) { //Inefficient. Pass by value.
  list<int> P = L; //Making another list, inefficient.
  while(!P.empty()) {
    cout<<P.front()<<" ";
    P.pop_front();
  }
  cout<<endl;
}
*/

void print(list<int> &L) { //Efficient. Pass by reference.
  for(auto it = L.begin(); it != L.end(); it++) cout<<*it<<" "; //Not making another list, instead just iterating over thhe current list.
  // for(auto v : L) cout<<v<<" "; //Could use range based loop also here. Pretty concise.
  cout<<endl;
}

int main() {
  list<int> L = {2, 3, 4, 5, 7};

  cout<<"Starting list is --> "<<endl;
  print(L);

  L.pop_back();
  L.pop_front();

  cout<<"After popping front and back, list looks like --> "<<endl;
  print(L);
 
  L.push_back(8);
  L.push_front(1);

  cout<<"After pushing in front and back, list looks like --> "<<endl;
  print(L);
  
  auto it = L.begin();
  for(int i = 0; i < 3; i++)  it++;

  L.insert(it, -1);

  cout<<"Inserted an element after 3rd (1-based indexing) position --> "<<endl;
  print(L);

  auto rt = L.begin();
  advance(rt, 2);

  L.erase(rt);
  cout<<"DBG --> "<<*rt<<endl;

  cout<<"Removing the element at 2+1 = 3rd (1-based indexing) position -->"<<endl;
  print(L);
  
  auto dt = L.end();
  advance(dt, -2);

  cout<<"2nd last element is --> "<<*dt<<endl;

  L.sort();

  cout<<"Sorted L --> "<<endl;
  print(L);
}


