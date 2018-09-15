#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

void insertAtIndex(list<int>& l, int k, int v) {
    // insert v at index k of the list l. insert v at the end if k is outside the size of l.
    if(k < 0)  return;   // return if index k is negative.
    list<int>::iterator it = l.begin();
    // or use advance(it, k);
    for(int i = 0; i < k and it != l.end(); i++) {
        it++;  //advance the iterator
    }
    l.insert(it, v);
}

void printList(list<int>& l) {
    for (list<int>::iterator it=l.begin(); it != l.end(); ++it)
      cout << *it << ' ';
    cout << '\n';
}

int main()
{
    // Create a list of integers
    // http://www.cplusplus.com/reference/list/list/
    list<int> l;

    // Add an integer to the front of the list
    l.push_front(25);

    // Add an integer to the back of the list
    l.push_back(13);

    // Add an integer after the first element
    l.insert(l.begin(), 5);

    // Add an integer after the last element
    l.insert(l.end(), 50);

    insertAtIndex(l, 2, 34);
    insertAtIndex(l, 20, 45);
    insertAtIndex(l, -2, 34);

    cout << "original list:\n";
    printList(l);

    cout << "reverse list:\n";
    l.reverse();
    printList(l);

    cout << "sorted list:\n";
    l.sort();
    printList(l);

    return 0;
}
