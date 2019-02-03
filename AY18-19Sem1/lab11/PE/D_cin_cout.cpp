#include <bits/stdc++.h>
using namespace std;
int N;
vector<string> names;
int main() {
	cin >> N;
	for (int i = 0; i < N; ++i) {
		string name;
		int height;
		cin >> name >> height;
		names.push_back(name);
		cout << "RAR" << endl;
	}
	names.push_back("RAR");
	reverse(names.begin(), names.end());
	bool first = true;
	for (auto it:names) {
		if (!first) cout << " ";
		first = false;
		cout << it;
	}
	cout << endl;
}
