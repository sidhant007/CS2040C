#include <bits/stdc++.h>
using namespace std;

class BasicBinaryHeap {
private:
  vector<int> compact_vector;
  int heap_size;

  // three helper navigation function
  int p(int i) { return i>>1; } // i/2
  int l(int i) { return i<<1; } // i*2
  int r(int i) { return (i<<1)+1; } // i*2+1

  void shift_up(int i) {
    if (i == 1) return; // at root, do nothing
    if (compact_vector[i] > compact_vector[p(i)]) { // violate property with parent
      swap(compact_vector[i], compact_vector[p(i)]); // swap upwards
      shift_up(p(i)); // recurse
    }
  }

  void shift_down(int i) {
    if (i > heap_size) return; // beyond last element, do nothing
    int swap_id = i;
    if (l(i) <= heap_size && compact_vector[i] < compact_vector[l(i)]) swap_id = l(i); // compare with left child, if exists
    if (r(i) <= heap_size && compact_vector[swap_id] < compact_vector[r(i)]) swap_id = r(i); // compare with right child, if exists
    if (swap_id != i) { // need to swap with the larger of the two children
      swap(compact_vector[i], compact_vector[swap_id]); // swap downwards with the larger of the two children
      shift_down(swap_id); // recurse
    }
  }

public:
  BasicBinaryHeap() {
    compact_vector.clear(); // clear the vector
    compact_vector.push_back(-1); // remember to set index 0 to be 'dummy'
    heap_size = 0; // an empty Binary Heap
  }

  void Insert(int x) {
    if (heap_size+1 >= (int)compact_vector.size()) compact_vector.push_back(0); // enlarge the vector by one if needed
    // what if no if condition above ??
    compact_vector[++heap_size] = x; // the only possible insertion point
    shift_up(heap_size); // shift upwards
  }

  int ExtractMax() {
    int taken = compact_vector[1]; // this is the maximum value
    swap(compact_vector[1], compact_vector[heap_size--]); // swap with the last existing leaf
    shift_down(1); // fix heap property downwards
    return taken; // return the maximum value
  }

  int GetMax() {
    return compact_vector[1]; // this is the root
  }

  bool IsEmpty() {
    return heap_size == 0; // the only condition for an empty compact_vector
  }
};

int main() {
  BasicBinaryHeap pq;
  cout << pq.IsEmpty() << endl; // should be 1/true
  pq.Insert(5);
  cout << pq.IsEmpty() << endl; // should be 0/false
  pq.Insert(2);
  pq.Insert(7);
  pq.Insert(3);
  cout << pq.ExtractMax() << endl; // should be 7
  pq.Insert(1);
  cout << pq.GetMax() << endl; // should be 5
  cout << pq.ExtractMax() << endl; // should be 5
  pq.Insert(8);
  cout << pq.ExtractMax() << endl; // should be 8 now
  return 0;
}
