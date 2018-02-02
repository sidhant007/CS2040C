#include <bits/stdc++.h>
using namespace std;

class ListArray {

  private:
    int N;
    int A[10]; // question 1a
    //Limited to 10 elements, only :(

  public:
    ListArray() : N(0) {} // question 1b
    // ^Constructor.

    int get(int i) {
      return A[i]; // question 1c
      // Check if i > N ?
    }

    int search(int v) {
      for (int i = 0; i < N; i++)
        if (A[i] == v)
          return i;
      return -1;
    }

    void insert(int i, int v) {
      if ((N == 10) || (i < 0) || (i > N)) return; // question 1d
      // for (int j = i; j <= N-1; j++) // question 1e //Wrong approach.
      //   A[j+1] = A[j];
      //^Above approach overwrites stuff :(
      for (int j = N-1; j >= i; j--) //Right approach.
        A[j+1] = A[j];
      A[i] = v;
      N++;
    }

    void remove(int i) {
      for (int j = i; j < N-1; j++) // question 1f
        A[j] = A[j+1];
      // ^Correct approach :)
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
      for (int i = 0; i < N-1; i++) //bubble sort.
        for (int j = i+1; j < N; j++)
          if (A[i] > A[j]) {
            // int temp = A[i];
            // A[i] = A[j];
            // A[j] = temp;
            swap(A[i], A[j]); //less code.
          }
    }
};

int main() {
  ListArray* LA = new ListArray(); // question 1h
  // ^declaring a point to a ListArray. If just used ListArray LA,
  // then would be reffering to the object itself should have used 
  // LA.insert(x, y) then.
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

