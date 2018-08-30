#include <bits/stdc++.h>
using namespace std;

int main() {
	int p[] = {2, 3, 5, 7, 11, 13, 17, 19};
	int A[9];
	A[8] = 0;
	for(int i = 0; i < 8; i++) {
		cin>>A[i];
	}
	int ans = 0;
	while(A[8] == 0) {
		A[0]++;
		for(int i = 0; i < 8; i++) {
			if(A[i] == p[i]) {
				A[i] = 0;
				A[i + 1]++;
			} else {
				break;
			}
		}
		ans++;
	}
	cout<<ans - 1<<endl;
}