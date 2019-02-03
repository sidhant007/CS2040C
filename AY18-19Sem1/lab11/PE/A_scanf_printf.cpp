#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> x, pair<int, int> y) {
	if (x.second != y.second) //freq
		return x.second > y.second;
	return x.first < y.first;
}
int main() {
	int N;
	scanf("%d", &N);
	unordered_map<int, int> freq;
	for (int i = 0, x; i < N; ++i) {
		scanf("%d", &x);
		freq[x]++;
	}
	vector<pair<int, int> > v;
	for (auto it:freq) v.push_back(it);
	sort(v.begin(), v.end(), cmp);
	for (auto it:v) printf("%d %d\n", it.second, it.first);
}
