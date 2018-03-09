#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<string, int> M;
  M.insert({"three", 3});
  M["five"] = 5;
  M.insert(make_pair("four", 4));

  cout<<"The size of M is --> "<<(int)M.size()<<endl;

  cout<<"Is \"three\" present --> "<<M.count("three")<<endl;
  cout<<"Is \"six\" --> "<<M.count("six")<<endl;

  for(auto &v : M) { //Use of & -- IMP!!
    cout<<v.first<<" "<<v.second<<endl;
  }

  M.erase("four");
  cout<<"Erased element with key 4"<<endl;

  for(auto &v : M) {
    cout<<v.first<<" "<<v.second<<endl;
  }

  if(M.find("five") != M.end()) {
    cout<<"I found the value for the key \"five\" to be --> "<<M["five"]<<endl;
  }

  M.erase("five");
  M.erase(M.find("three"));
  cout<<"Is it empty --> "<<M.empty()<<endl;
  return 0;
}
