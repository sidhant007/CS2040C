#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100010

int pq[MAX_N], pq_sz;

int p(int i) { return i>>1; } // i/2
int l(int i) { return i<<1; } // i*2
int r(int i) { return (i<<1)+1; } // i*2+1

void shift_up(int i) {
  if (i == 1) return; // at root, do nothing
  if (pq[i] > pq[p(i)]) { // violate property with parent
    swap(pq[i], pq[p(i)]); // swap upwards
    shift_up(p(i)); // recurse
  }
}

void Insert(int x) {
  pq[++pq_sz] = x;
  shift_up(pq_sz);
}

void shift_down(int i) {
  if (i > pq_sz) return; // beyond last element, do nothing
  int swap_id = i;
  if (l(i) <= pq_sz && pq[i] < pq[l(i)]) swap_id = l(i);
  if (r(i) <= pq_sz && pq[swap_id] < pq[r(i)]) swap_id = r(i);
  if (swap_id != i) { // need to swap with the larger of the two children
    swap(pq[i], pq[swap_id]);
    shift_down(swap_id);
  }
}

int ExtractMax() {
  int taken = pq[1];
  swap(pq[1], pq[pq_sz--]); // swap with last existing leaf
  shift_down(1);
  return taken;
}


bool empty() {
  return pq_sz == 0;
}

int main() {
  Insert(5);
  Insert(2);
  Insert(7);
  Insert(3);
  cout << ExtractMax() << endl; // should be 7
  Insert(1);
  cout << ExtractMax() << endl; // should be 5
  Insert(8);
  cout << ExtractMax() << endl; // should be 8 now
  return 0;
}
