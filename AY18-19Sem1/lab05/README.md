## Lab 05

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](content.pdf) (The pdf version of the ppt shown)

  [priority_queue_stl.cpp](priority_queue_stl.cpp) (Example usage of STL Priority Queue)
  [tree.cpp](tree.cpp) (Methods for creating and traversing a binary tree)

**Challenge Questions** -

Q) Try to modify/implement a new postfix evaluator which can take in numbers consisting of more than 1 digit.

<details>
  <summary>Solution</summary>
  TBA
</details>

Q) Read up/Try to find the differences between STL Deque (Double Ended Queue) and STL List (Doubly linked list)

<details>
  <summary>Solution</summary>
  Apart from that the broad differences I am able to find are -
  <br>
  <ol>
    <li>DEQUE is like a superset of VECTOR. It is VECTOR ABILITIES + PUSH_FRONT + POP_FRONT. </li>
    <li>The only feature lacking in DEQUE that is there in vector is mehtod capacity and reserve. </li>
    <li>List differs from vector, in mainly back-end implementation and some pros and cons as follows - </li>
      <ol>
        <li>Vector/Deque has O(constant time) access to a random element, whereas List has O(N). </li>
        <li>List can do insertion in O(1) in between, given it has an iterator to the immediate previous/next element where we want to insert. For a vector/deque the insertion in between is always O(N) (irrespective of the fact that we have an iterator or not) </li>
      </ol>
  </ol>
</details>
Visit [here](https://stackoverflow.com/questions/1436020/c-stl-containers-whats-the-difference-between-deque-and-list) for more info
