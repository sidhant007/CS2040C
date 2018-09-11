// Binary search using standard C++ library
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   vector<int> arr;
   int n, v, i, a;
   cout << "Enter size of array:\n";
   cin >> n;
   cout << "Enter the array elements in ascending order:\n";
   for(i=0;i<n;i++) {
        cin >> a;
        arr.push_back(a);
   }
   cout << "Enter the elements to search:\n";
   cin >> v;
   if (binary_search(arr.begin(), arr.end(), v))
        cout << "found!\n";
    else
        cout << "not found.\n";

   return 0;
}
