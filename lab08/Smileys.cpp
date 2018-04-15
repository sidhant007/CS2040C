#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1005;

string s[MAX_N];
int R, C;
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

void flood_fill(int x, int y, char match_me) {
  if(x < 0 or x >= R or y < 0 or y >= C or s[x][y] != match_me)  return ;
  s[x][y] = ' ';
  for(int i = 0; i < 4; i++) {
    flood_fill(x + dx[i], y + dy[i], match_me);
  }
}

int main() {
  cin>>R>>C;
  cin.ignore();
  for(int i = 0; i < R; i++) {
    getline(cin, s[i]);
  }
  int faces = 0, smileys = 0;

  for(int i = 0; i < R; i++) {
    for(int j = 0; j < C; j++) {
      if(s[i][j] == 'v')  smileys++;
      if(s[i][j] == 'v' or s[i][j] == '^') {
        faces++;
        flood_fill(i, j, s[i][j]);
      }
    }
  }
  cout<<faces<<'\n'<<smileys<<'\n';
}
