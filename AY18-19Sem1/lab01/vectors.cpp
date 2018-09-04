#include <bits/stdc++.h>
using namespace std;

void print(vector<int> V) {
	for(auto v : V)	cout<<v<<" ";
  // Do remember the difference between for(auto v : V) and for(auto &v : V) (try it out yourself for more clarity)
	cout<<"\n\n";
}

int main() {
	vector<int> V;

	srand(time(NULL));

	for(int i = 0; i < 10; i++)	V.push_back(3);

	cout<<"Vector generated --> \n";
	print(V);

  cout<<"3rd (0-based) element is --> "<<V[3]<<'\n';

	cout<<"Insert an element at the 1st position (0-based)\n";
	V.insert(V.begin() + 1, 5);
	print(V);

	cout<<"Erase 5th element(0-based)\n";
	V.erase(V.begin() + 5);
	print(V);

	reverse(V.begin() + 5, V.end() - 5);

	cout<<"Reversed the vector --> \n";
	print(V);

	sort(V.begin(), V.end());

	cout<<"Vector sorted --> \n";
	print(V);

	cout<<"Front(Head) of the vector --> "<<V.front()<<'\n';
	cout<<"Back(Tail) of the vector --> "<<V.back()<<'\n';

	while(V.empty() == false) {
		cout<<"Popping --> \n";
		print(V);
		V.pop_back();
	}

  return 0;
}
