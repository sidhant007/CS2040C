#include <bits/stdc++.h>
using namespace std;
int N;
map<int, deque<string>> m;
int main() {
	scanf("%d", &N);
	m[0].push_back("RAR");
	for (int i = 0; i < N; ++i) {
		char s[20];
		int height;
		scanf("%s%d", s, &height);
		m[height].push_front(string(s));
		map<int, deque<string>>::iterator it = m.lower_bound(height);
		--it;
		printf("%s\n", it->second.back().c_str());
	}
	vector<string> names;
	for (auto it:m) {
		for (auto x:it.second)
			names.push_back(x);
	}
	bool first = true;
	for (auto it:names) {
		if (!first) printf(" ");
		first = false;
		printf("%s", it.c_str());
	}
	puts("");
}
