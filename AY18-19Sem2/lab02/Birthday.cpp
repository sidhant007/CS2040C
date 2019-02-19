#include <bits/stdc++.h>                             // C++ code for task 5
using namespace std;

typedef pair<int, int> ii; // we will utilize the natural sort order of the
typedef tuple<int, int, int> iii;    // primitive data types that we paired

int main() {

  iii A = make_tuple(5, 24, -1982);                   // reorder DD/MM/YYYY
  iii B = make_tuple(5, 24, -1980);                           // to MM, DD,
  iii C = make_tuple(11, 13, -1983);          // and then use NEGATIVE YYYY

  vector<iii> birthdays;
  birthdays.push_back(A); birthdays.push_back(B); birthdays.push_back(C);

  sort(birthdays.begin(), birthdays.end());                // that's all :)

  for (auto &p: birthdays)
    printf("%d %d %d\n", get<1>(p), get<0>(p), -get<2>(p));
}

