## Lab 02

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](content.pdf) (The pdf version of the ppt shown)

  [STLList.cpp](STLList.cpp) (The STL List implementation)

  [STLStack.cpp](STLStack.cpp) (The STL Stack implementation)

  [STLQueue.cpp](STLQueue.cpp) (The STL Queue implementation)

  [STLDeque.cpp](STLDeque.cpp) (The STL Deque implementation) *(The deque is NOT implemented using DLL (Doubly linked list) internally, it is actually implemented using the concept of dynamic arrays. This is because it supports accessing any random element in O(1), i.e DQ[x] can be accessed for any x in O(1). The broad idea of dynamic array technique is that you have a structure like vector, but each node of vector does not store an element instead it stores a fixed size array. The in-depth details are out of scope.)*

**Challenge Questions** -

Q) Try to simulate the functions of a QUEUE, i.e push(), front(), pop() using only 2 STL stacks (NOT ALLOWED TO USE ANY ARRAYS) (You are allowed to make the operations expensive, i.e instead of O(1) they can be O(N))

<details>
  <summary>Solution</summary>
  <a href = "https://stackoverflow.com/questions/69192/how-to-implement-a-queue-using-two-stacks">Stack OverFlow Link</a>
</details>

Q) In the quicksort element, let us do the following 4 variations, for each variation try to comment on the time complexity of the solution? (HINT - Making a recursion tree, helps in analysis of recursive algorithms)

1. If we always pick the smallest element as pivot
2. If we always pick the median as pivot
3. If we do a coin toss, if head comes, we pick the smallest element as pivot, otherwise we pick the median.
4. If the current subproblem is of size N, then we pick the (N/3)rd smallest element, instead of the median. (The median by convention is (N/2)th smallest element)

<details>
  <summary>Solution</summary>
  1. O(N^2)
  2. O(NlogN)
  3. O(NlogN), average case (Expected time complexity)
  4. O(NlogN), here the base of logarithm is 3/2 instead of the classical base 2.
</details>
