# Lab 03

  [Feedback form](https://docs.google.com/forms/d/e/1FAIpQLScLeIezAu3Bueokx98FzaNraoK_90lxMd6trBRnnNLXKQjojg/viewform?usp=sf_link) (Please fill this form, to give feedback about this lab)

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](https://sidhant007.github.io/CS2040C/lab03/content.pdf) (The pdf version of the ppt shown)

  [STLList.cpp](https://sidhant007.github.io/CS2040C/lab03/STLList.cpp) (The STL List implementation) *(FIX- Please check the new print function earlier one was inefficient. In the earlier one I by mistake passed the list by value and then used another list just to pop out the stuff. A better approach is to pass the list by reference and iterate through all the elements using iterators.)*

  [STLStack.cpp](https://sidhant007.github.io/CS2040C/lab03/STLStack.cpp) (The STL Stack implementation)

  [STLQueue.cpp](https://sidhant007.github.io/CS2040C/lab03/STLQueue.cpp) (The STL Queue implementation)

  [STLDeque.cpp](https://sidhant007.github.io/CS2040C/lab03/STLDeque.cpp) (The STL Deque implementation) *(FIX - The deque is NOT implemented using DLL (Doubly linked list) internally, it is actually implemented using the concept of dynamic arrays. This is because it supports accessing any random element in O(1), i.e DQ[x] can be accessed for any x in O(1). The broad idea of dynamic array technique is that you have a structure like SLL / DLL, but each node of SLL/DLL does not store an element instead it stores an array. The in-depth details are out of scope. This fix is primarily for Group 04.)*

  [SLLStack.cpp](https://sidhant007.github.io/CS2040C/lab03/SLLStack.cpp) (Our own implementation of a stack using SLL (Singly Linked List)) **(Can be useful for PS2 - D)** *(FIX - The function printList cannot be accessed by the class MyStack because the inheritance done is private. When we say class A inherits from class B, in a way as class A : B { // Code } it is equivalent to saying class A : private B { // Code }. In simpler terms, if we drop the word "public"/"private" then by default for classes it is meant to be "private", whereas for "struct" by default it is meant to "public". Since we are using classes, so all the inherited functions become privately inherited we cannot access the inherited functions through the main(), i.e because main() is out of the scope of MyStack. This fix is primarily for Group 04)*

## Functions we used - 
  [advance](http://en.cppreference.com/w/cpp/iterator/advance) (Used for moving an iterator in positive / negative direction from its current position)

Take me to [wow](#Q1)

## Challenge Questions - 

Q) <a name="Q1"></a> NA

<details>
  <summary>Solution</summary>
  <pre>
  NA
  </pre>
</details>

Q) NA

<details>
  <summary>Solution</summary>
  <pre>
  NA
  </pre>
</details>

Q) NA

<details>
  <summary>Solution</summary>
  NA
</details>

