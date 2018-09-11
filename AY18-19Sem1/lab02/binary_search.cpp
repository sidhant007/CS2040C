// C++ program to implement Binary Search
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int v)
{
    int mid;
    while(l<=r)
    {
        mid = (l + r)/2;
        if(v == arr[mid])
            return mid;
        else if (v < arr[mid])
            r = mid-1;
        else
            l = mid + 1;
    }
   return -1;
}

int main() {
   int arr[100];
   int n, v, i;

   cout << "Enter size of array:\n";
   cin >> n;
   cout << "Enter the array elements in ascending order:\n";

   for(i=0;i<n;i++) {
        cin >> arr[i];
   }

   cout << "Enter the elements to search:\n";
   cin >> v;

   int result = binarySearch(arr, 0, n-1, v);

   if (result == -1)   cout << "Element is not present in array.\n";
   else                cout << "Element is present at index: "<<result<<"\n";

   return 0;
}
