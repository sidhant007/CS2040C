#include <bits/stdc++.h>
using namespace std;
int N;
map<int, deque<string>> m;
int main() {
	cin >> N;
	m[0].push_back("RAR");
	for (int i = 0; i < N; ++i) {
		string name;
		int height;
		cin >> name >> height;
		m[height].push_front(name);
		map<int, deque<string>>::iterator it = m.lower_bound(height);
		--it;
		cout << it->second.back() << endl;
	}
	vector<string> names;
	for (auto it:m) {
		for (auto x:it.second)
			names.push_back(x);
	}
	bool first = true;
	for (auto it:names) {
		if (!first) cout << " ";
		first = false;
		cout << it;
	}
	cout << endl;
}
