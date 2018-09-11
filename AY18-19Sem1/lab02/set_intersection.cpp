// Set intersention between two sorted arrays using binary search
#include <stdio.h>
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int v)
{
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(v == arr[mid])
            return mid;
        else if (v < arr[mid])
            r = mid-1;
        else
            l = mid + 1;
    }
   return -1;
}

int main()
{
   int a[100], b[100], c[100];
   int m, n, i, j=0;
   cout << "Enter size of two arrays:\n";
   cin >> m;
   cin >> n;
   cout << "Enter the array elements for first array in ascending order:\n";
   for(i=0;i<m;i++)
   {
        cin >> a[i];
   }
   cout << "Enter the array elements for second array in ascending order:\n";
   for(i=0;i<n;i++)
   {
        cin >> b[i];
   }

   for(i=0;i<m;i++)
   {
        if (binarySearch(b, 0, n-1, a[i]) >=0)
        {
            c[j] = a[i];
            j++;
        }
   }
   cout << "Intersection array is:\n";
   for(i=0;i<j;i++)
   {
        cout << c[i];
        cout << " ";
   }
   cout << "\n";
   return 0;
}
