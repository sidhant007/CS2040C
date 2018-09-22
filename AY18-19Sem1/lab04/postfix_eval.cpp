#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> S;
  string x;
  cin>>x;
  for(int i = 0; i < x.length(); i++) {
    if(x[i] >= '0' and x[i] <= '9') // is digit/operand
      S.push(x[i] - '0');
    else {   // is operator.
      int b = S.top();
      S.pop();
      int a = S.top();
      S.pop();

      if(x[i] == '+')       a = a + b;
      else if(x[i] == '-')  a = a - b;
      else if(x[i] == '*')  a = a * b;

      S.push(a);
    }
  }
  cout<<S.top()<<endl;
  return 0;
}
