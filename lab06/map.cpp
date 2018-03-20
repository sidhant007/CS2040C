#include<bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> M;

  M["ball"] = 5;
  M.insert({"apple", 7});
  M["cat"] = 2;

  if(M.find("cat") != M.end())  cout<<"Cat is present"<<endl;

  if(M.count("dog") == 0)       cout<<"Dog is NOT present"<<endl;

  cout<<"Printing the stuff inside the map --> "<<endl;
  for(auto v : M) {
    cout<<v.first<<" "<<v.second<<endl;
  }

  auto it = M.lower_bound("bag");
  cout<<(it -> first)<<" "<<(it -> second)<<endl;

  cout<<"Erasing --> "<<(it -> first)<<endl;
  M.erase(it);

  cout<<"Size of the map is --> "<<(int)M.size()<<endl;
  cout<<"Is the map empty --> "<<M.empty()<<endl;
}
