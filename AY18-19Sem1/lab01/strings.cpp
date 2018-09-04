#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	a = "CS2040C";
	b = " is easy";
	a = a + b;

	cout<<a<<endl;

	a = "world", b = "hello";
	if(a < b)	cout<<"sorted in order\n"; //Comparing lexicographically.
	else {
		cout<<"not sorted, so swap\n";
		swap(a, b);
	}
	cout<<a<<" "<<b<<endl;


	string c = a.substr(2), d = b.substr(2, 2);
	cout<<c<<" "<<d<<endl;

	string x = "Hello how is CS2040C ?";
	cout<<x<<endl;

	int position = x.find("bow");
	cout<<"\"how\" comes at position(0 based) --> "<<position<<endl;

}
