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
	
	for(int i = 0; i < 10; i++)	V.push_back(rand() % 20);

	cout<<"Vector generated --> \n";
	print(V);

	cout<<"Insert an element at the 1st position (0-based)\n";
	V.insert(V.begin() + 1, 3);
	print(V);

	cout<<"Erase 5th element(0-based)\n";
	V.erase(V.begin() + 5);
	print(V);

	reverse(V.begin(), V.end());

	cout<<"Reversed the vector --> \n";
	print(V);

	sort(V.begin(), V.end());

	cout<<"Vector sorted --> \n";
	print(V);

	cout<<"Front(Head) of the vector --> "<<V.front()<<'\n';
	cout<<"Back(Tail) of the vector --> "<<V.back()<<'\n';

  // In the lab I also showed *V.begin() can be used to access the first element.

	while(V.empty() == false) {
		cout<<"Popping --> \n";
		print(V);
		V.pop_back();
	}
  return 0;
}
