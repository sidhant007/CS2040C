#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  map<string, int> M;
  int cntr = 0;
  while(!cin.eof()) {
    cin>>a>>b;
    if(M.find(a) == M.end())  M[a] = cntr++;
    if(M.find(b) == M.end())  M[b] = cntr++;
    cout<<a<<" mapped to --> "<<M[a]<<endl;
    cout<<b<<" mapped to --> "<<M[b]<<endl;
  }

}
