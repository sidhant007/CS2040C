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

	string c = a.substr(2), d = b.substr(3, 2);
	cout<<c<<" "<<d<<endl;

	string x = "Hello how is CS2040C ?";
	cout<<x<<endl;

	int position = x.find("how");
	cout<<"\"how\" comes at position(0 based) --> "<<position<<endl;

	char *p = new char[x.length() + 1];

	strcpy(p, x.c_str()); //might be irrelevant.

	cout<<p<<endl;

	char *q = strtok(p, "e ");	//might be irrelevant.
	while(q != 0) {
		cout<<q<<"\n";
		q = strtok(NULL, " ");
	}
}
