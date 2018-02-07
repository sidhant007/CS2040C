#include <bits/stdc++.h>
using namespace std;

int main() {

	// A = 1 3 7 5 8
	// B = 4 9 3 2 7
	// C = A intersection B = 3 7

	vector<int> A({1, 3, 5, 7, 8});
	vector<int> B({4, 9, 3, 2, 7});

	vector<int> C; //Should be the intersection of A and B.

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(C));

	for(auto v : C)	cout<<v<<" ";
  cout<<endl;
}
