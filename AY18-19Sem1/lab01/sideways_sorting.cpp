#include <bits/stdc++.h>
using namespace std;

string make_to_lower(string x) {
  string y = x;
  for(int i = 0; i < x.length(); i++) {
    y[i] = tolower(x[i]);
    // tolower('C') = 'c'
  }
  return y;
}

bool cmp(const string a, const string b) {
  string c = make_to_lower(a), d = make_to_lower(b);
  return c < d;
}

string input[15], rotated[15], output[15];

int main() {

  bool isFirstCase = 1;

  while(true) {

    int r, c;

    cin>>r>>c;

    if(r == 0 and c == 0) break;

    if(!isFirstCase)  cout<<endl;
    else {
      isFirstCase = 0;
    }

    for(int i = 0; i < r; i++) {
      cin>>input[i];
    }

    for(int j = 0; j < c; j++) {
      rotated[j] = "";
      for(int i = 0; i < r; i++) {
        rotated[j] += input[i][j];
      }
    }

    stable_sort(rotated + 0, rotated + c, cmp);

    for(int i = 0; i < r; i++) {
      output[i] = "";
      for(int j = 0; j < c; j++) {
        output[i] += rotated[j][i];
      }
    }

    for(int i = 0; i < r; i++)  cout<<output[i]<<endl;
  }
}
