#include <bits/stdc++.h>
using namespace std;
int N;
map<int, string> m;
int main() {
	cin >> N;
	m[0] = "RAR";
	for (int i = 0; i < N; ++i) {
		string name;
		int height;
		cin >> name >> height;
		m[height] = name;
		map<int, string>::iterator it = m.lower_bound(height);
		--it;
		cout << it->second << endl;
	}
	bool first = true;
	for (auto it:m) {
		if (!first) cout << " ";
		first = false;
		cout << it.second;
	}
	cout << endl;
}
