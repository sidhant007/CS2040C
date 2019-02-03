#include <bits/stdc++.h>
using namespace std;
int N;
vector<string> names;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		char s[20];
		int height;
		scanf("%s%d", s, &height);
		names.push_back(string(s));
		puts("RAR");
	}
	names.push_back("RAR");
	reverse(names.begin(), names.end());
	bool first = true;
	for (auto it:names) {
		if (!first) printf(" ");
		first = false;
		printf("%s", it.c_str());
	}
	puts("");
}
