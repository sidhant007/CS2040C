## Lab 03

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](content.pdf) (The pdf version of the ppt shown)

  [stl_list.cpp](stl_list.cpp) (Using STL List as a linked list structure)

  [list_implementation1.cpp](list_implementation1.cpp) (List implementation v1)

  [list_implementation2.cpp](list_implementation2.cpp) (List implementation v2) (Written live in class)

  Note - **Both the implementations of list have basic methods like insertFirst, reverseList and printList implemented.**

**Challenge Questions** -

Q) Easy questions -
- Find the length of a given linked list in O(n). (Assume the last element of the list points to NULL as its next element)
- Find an element in a list in O(n).
- Implement method insertAtIndex(node* head, int k, int val), where head is the head of the list, k is the position at which you want to insert the value, val. (In O(n))

<details>
  <summary>Solution</summary>
  1. Iterate, i.e from node go to node->next till you hit node == null.
  2. Similar as above, just the breaking condition is now when node->val == find_value, return true.
  3. Iterate to the kth element first. Let this node be a, and the next node be b. Now let us say we want to insert the new node named c, then we insert it like this - We set a->next = c. We also set c->next = b. We are done.
</details>
Refer to the solution code [here](list_hw.cpp)

Q) Medium Question - Click [here](https://stackoverflow.com/questions/2663115/how-to-detect-a-loop-in-a-linked-list).

It is a stackoverflow question. I would recommend you to go through the question and first think about potential algorithms.
Only after some time you should prefer to look up at the most voted answer given. (For maximising learning)

<details>
  <summary>Solution</summary>
  Provided in the link.
</details>

Q) Advanced stuff - [Brief description of SKIP LIST](https://brilliant.org/wiki/skip-lists/) (Note - Definitely not for testing, can read it for fun though).

You can check out the link given to a brilliant article explaining "skip list", a very powerful data structural idea built on top of linked list. The essence of the idea is similar to binary search trees, which you will encounter later in this course.
