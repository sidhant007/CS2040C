# Lab 03

  [Feedback form](https://docs.google.com/forms/d/e/1FAIpQLScLeIezAu3Bueokx98FzaNraoK_90lxMd6trBRnnNLXKQjojg/viewform?usp=sf_link) (Please fill this form, to give feedback about this lab)

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](https://sidhant007.github.io/CS2040C/lab03/content.pdf) (The pdf version of the ppt shown)

  [STLList.cpp](https://sidhant007.github.io/CS2040C/lab03/STLList.cpp) (The STL List implementation) *(FIX- Please check the new print function earlier one was inefficient. In the earlier one I by mistake passed the list by value and then used another list just to pop out the stuff. A better approach is to pass the list by reference and iterate through all the elements using iterators.)*

  [STLStack.cpp](https://sidhant007.github.io/CS2040C/lab03/STLStack.cpp) (The STL Stack implementation)

  [STLQueue.cpp](https://sidhant007.github.io/CS2040C/lab03/STLQueue.cpp) (The STL Queue implementation)

  [STLDeque.cpp](https://sidhant007.github.io/CS2040C/lab03/STLDeque.cpp) (The STL Deque implementation) *(FIX - The deque is NOT implemented using DLL (Doubly linked list) internally, it is actually implemented using the concept of dynamic arrays. This is because it supports accessing any random element in O(1), i.e DQ[x] can be accessed for any x in O(1). The broad idea of dynamic array technique is that you have a structure like SLL / DLL, but each node of SLL/DLL does not store an element instead it stores an array. The in-depth details are out of scope. This fix is primarily for Group 04.)*

  [SLLStack.cpp](https://sidhant007.github.io/CS2040C/lab03/SLLStack.cpp) (Our own implementation of a stack using SLL (Singly Linked List)) **(Can be useful for PS2 - D)** *(FIX - The function printList cannot be accessed by the class MyStack because the inheritance done is private. When we say class A inherits from class B, in a way as class A : B { // Code } it is equivalent to saying class A : private B { // Code }. In simpler terms, if we drop the word "public"/"private" then by default for classes it is meant to be "private", whereas for "struct" by default it is meant to "public". Since we are using classes, so all the inherited functions are privately inherited, so we cannot access the inherited functions through the main(), i.e because main() is out of the scope of MyStack. This fix is primarily for Group 04)*

## Functions we used - 
  [advance](http://en.cppreference.com/w/cpp/iterator/advance) (Used for moving an iterator in positive / negative direction from its current position)

## Challenge Questions - 

Q) <a name="Q1"></a> PS1 Variant - Instead of finding the median, i.e the N/2 th element, can you do the same question for the N/3 rd element. (assume integer division for cases when N is not divisible by 3). So now I am asking you to add all the N/3 rd elements in sorted order and print the sum. (**Note** - Solve this in O(N*logN) )

<details>
  <summary>Solution</summary>
  Just try to maintain a 1:2 ratio in the 2 priority queues instead of a 1:1 ratio.
  <br>
  (Assuming you know the priority queue solution, if not then please watch <a href = "https://www.youtube.com/watch?v=VmogG01IjYc">this</a> for the first 3 minutes, to get a clear understanding)
</details>

Q) <a name="Q2"></a> PS1 Final version - Solve PS1 C but with the additional constraint that all integers in array A[] are non-negative integers which are not more than 100000, in just O(N). O(N) means you cannot use priority_queue any more. In simpler terms I have simplfied the constraints since now the value of elements in A[] can be atmost 100000 but at the same time I want you to solve this question in O(N) not O(N*logN)(**Note** - In this question stick with the original definition of median, i.e N/2 th element. This question is independent of the question mentioned above)

**Hint 1 - Use counting sort + something ??**

**Hint 2 - Try to solve the question in reverse order, meaning first find the median for all the n elements, then for the first n - 1 elements, then for the first n - 2 elements and so on. (The solution that I have only works in reverse order) :)**

<details>
  <summary>Solution</summary>
  <a href = "https://sidhant007.github.io/CS2040C/lab03/PS1_harder_variant.cpp">My solution</a>
  <br>
  PS - This solution does not do COUNTING SORT (since I implemented it for PS1 C, where I could not use counting sort since the numbers could be large but apart from the counting sort the remaining logic is O(N))
</details>

Q) NA

<details>
  <summary>Solution</summary>
  NA
</details>

