// option to use <bits/stdc++.h> (PS: used in competitive programming but can confuse other software engineers)
#include <algorithm> 
#include <iostream>
#include <vector>
using namespace std;

class ListVector {
private:
  int N;
  vector<int> A;
public:
  ListVector(){
    N = 0;
    A.reserve(10);
  }
  int get(int i) {
    if ((i < 0) || (i > N)) return -1;
    return A[i];
  }
  int search(int v) {
    for (int i = 0; i < N; i++)
      if (A[i] == v)
        return i;
    return -1;
  }
  void insert(int i, int v) {
    if ((i < 0) || (i > (int)A.size())) return;
    if (N == (int)A.size())
      A.push_back(0); // insert dummy number just to increase the vector size by 1

    for (int j = N-1; j >= i; j--) // Doesn't work if reverse the order.
      A[j+1] = A[j];
    A[i] = v;
    // if (i == (int)A.size()) A.push_back(v);
    // else                    A[i] = v;
    N++;
  }
  void remove(int i) {
    for (int j = i; j < N-1; j++)
      A[j] = A[j+1];
    N--;
  }
  void printList() {
    for (int i = 0; i < N; i++) {
      cout << A[i] << " ";
    }
    cout << endl;
  }
  void sortList() { // sort array A, question 1g
    sort(A.begin(), A.begin()+N); // we can use library code
  }
};

int main() {
  ListVector* LA = new ListVector();
  LA->insert(0, 5);
  LA->insert(0, 1);
  LA->insert(0, 4);
  LA->insert(0, 7);
  LA->insert(0, 2); // we should have A = {2, 7, 4, 1, 5} by now
  LA->printList(); // sorted
  cout << LA->get(3) << endl; // 1, A[3] = 1
  cout << LA->get(5) << endl; // -1, 5 >= A.size() //FIXME!!
  cout << LA->search(4) << endl; // 2, A[2] = 4
  cout << LA->search(6) << endl; // not found, -1
  LA->remove(1); // we should have A = {2, 4, 1, 5} by now
  cout << LA->search(4) << endl; // 1, A[1] = 4 now
  cout << LA->search(7) << endl; // not found, -1
  LA->printList(); // unsorted
  LA->sortList(); // we should have A = {1, 2, 4, 5} by now
  LA->printList(); // sorted
  /*
  ListVector LV;
  for (int i = 0; i < 100; i++)
    LV.insert(i, rand()); // always insert at the back?
  LV.printList();
  */
  return 0;
}
