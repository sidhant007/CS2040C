#include <bits/stdc++.h>
using namespace std;
int N;
map<int, string> m;
int main() {
	scanf("%d", &N);
	m[0] = "RAR";
	for (int i = 0; i < N; ++i) {
		char s[20];
		int height;
		scanf("%s%d", s, &height);
		m[height] = string(s);
		map<int, string>::iterator it = m.lower_bound(height);
		--it;
		printf("%s\n", it->second.c_str());
	}
	bool first = true;
	for (auto it:m) {
		if (!first) printf(" ");
		first = false;
		printf("%s", it.second.c_str());
	}
	cout << endl;
}
