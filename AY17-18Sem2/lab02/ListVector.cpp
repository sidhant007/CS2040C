#include <bits/stdc++.h>
using namespace std;

class ListVector {
  private:
    int N;
    vector<int> A; // question 1a, changed to vector
    // ^yay, now can have any size :)
  public:
    ListVector() : N(0) { A.reserve(10); } // question 1b, N <= (int)A.size(); but A can grow this time

    int get(int i) {
      if ((i < 0) || (i > N)) return -1; // not found
      // ^added safegaurd.
      return A[i]; // question 1c, same
    }

    int search(int v) {
      for (int i = 0; i < N; i++)
        if (A[i] == v)
          return i;
      return -1;
    }

    void insert(int i, int v) {
      if ((i < 0) || (i > (int)A.size())) return; // question 1d, N is not fixed to 10
      // for (int j = i; j <= N-1; j++) // question 1e
      //   A[j+1] = A[j];
      if(N == (int)A.size()) 
        A.push_back(0); //Adding a dummy element at the back if we need to strech the vector
      //^fix.
      for (int j = N-1; j >= i; j--)
        A[j+1] = A[j];

      A[i] = v;
      // if (i == (int)A.size()) A.push_back(v);
      // else                    A[i] = v;
      // ^sorry, this is wrong :(

      N++;
    }

    void remove(int i) {
      for (int j = i; j < N-1; j++) // question 1f
        A[j] = A[j+1];
      N--;
    }

    void printList() {
      for (int i = 0; i < N; i++) {
        if (i) cout << " ";
        cout << A[i];
      }
      cout << endl;
    }

    void sortList() { // sort array A, question 1g
      sort(A.begin(), A.begin()+N); // we can use library code
    }
};

int main() {
  ListVector* LA = new ListVector(); // question 1h
  LA->insert(0, 5);
  LA->insert(0, 1);
  LA->insert(0, 4);
  LA->insert(0, 7);
  LA->insert(0, 2); // we should have A = {2, 7, 4, 1, 5} by now
  cout << LA->get(3) << endl; // 1, A[3] = 1
  cout << LA->search(4) << endl; // 2, A[2] = 4
  cout << LA->search(6) << endl; // not found, -1
  LA->remove(1); // we should have A = {2, 4, 1, 5} by now
  cout << LA->search(4) << endl; // 1, A[1] = 4 now
  cout << LA->search(7) << endl; // not found, -1
  LA->printList(); // unsorted
  LA->sortList(); // we should have A = {1, 2, 4, 5} by now
  LA->printList(); // sorted
  return 0;
}

