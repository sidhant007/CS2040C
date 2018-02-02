#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> A({1, 3, 7, 5, 8});
	
	sort(A.begin(), A.end());
	
	// Sorted A[] = {1, 3, 5, 7, 8}
	
	int z = 11; //Target sum.
	
	for(int i = 0; i < (int)A.size(); i++) {
	    int x = A[i];
	    int y = z - x;
	    if(binary_search(A.begin(), A.end(), y)) {
	      cout<<"Found --> "<<x<<" "<<y<<endl;
	      break;
	    }
	}
}
