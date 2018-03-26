#include <bits/stdc++.h>
using namespace std;

const int N = 105;

int AdjMat[N][N];

int main() {
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin>>AdjMat[i][j];
		}
	}

	vector<tuple<int, int, int> > EdgeList;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(AdjMat[i][j] > 0) {
				EdgeList.push_back({i, j, AdjMat[i][j]});
			}
		}
	}
	for(auto v : EdgeList) {
		cout<<get<0>(v)<<" to "<<get<1>(v)<<" with weight "<<get<2>(v)<<endl;
	}
}