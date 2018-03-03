# Lab 04

  [Feedback form](https://docs.google.com/forms/d/e/1FAIpQLScLeIezAu3Bueokx98FzaNraoK_90lxMd6trBRnnNLXKQjojg/viewform?usp=sf_link) (Please fill this form, to give feedback about this lab)

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](https://sidhant007.github.io/CS2040C/lab04/content.pdf) (The pdf version of the ppt shown) 


  [STLPriorityQueue.cpp](https://sidhant007.github.io/CS2040C/lab04/STLPriorityQueue.cpp) (The STL Priority Queue implementation)

  [UVa 1203.cpp](https://sidhant007.github.io/CS2040C/lab04/UVa1203.cpp) (The solution code for the problem <a href = "https://uva.onlinejudge.org/external/12/1203.pdf">Uva 1203</a> discussed in the lab which involves the use of Priority Queue)

## Challenge Questions - 

Q) For PS2 D, try to code your priority queue using pointers instead of using an array based approach.

<details>
  <summary>Solution</summary>
  TBA
</details>

Q) Given an array of N integers, find the Kth smallest element in time complexity O(N + KlogN) ?

(Note - Sorting will not work) 

(Note - We do not want a randomised solution, so do not think along the lines of n_th element function in the C++ library)

<details>
  <summary>Solution</summary>
  TBA
</details>

Q) We know that a Priority Queue is internally implemented using a max heap. For PS2 D, a lot of you implemented your own "max heap" and the general approach was that each node should have "2 children". That is why it is known as "binary heap". But let us say we make a "ternary heap", i.e in this heap each node will have 3 children each. Then what will be the time complexity per push() and per erase() ? Would this be better than the binary tree in any aspect ?

Or you can try to calculate the time complexity for a  more generic version of a "k-ary heap" where each node has "k children".

<details>
  <summary>Solution</summary>
  NA
</details>

Q) A kattis like question - 

Given an array of N elements where all of them are initially equal to 1. You are now given Q operations where each operation is either of the 3 types - 

Type 1 - Take the largest element of the array and multiply it by x, where (1 <= x <= 100000)

Type 2 - Take the largest element of the array and divide it by x, where (1 <= x <= 100000) (This division is NOT integer division, it is NORMAL division, so 5 / 2 = 2.5)

Type 3 - Print "Yes" if the (largest element of the array is >= 2 * second largest element of the array). Otherwise print "No"

Assume 1 <= N <= 100000, 1 <= Q <= 100000

Also do note, that if you implement this naively in C++, you will experience overflow in int/longlong. And using Python for the bigInteger is NOT the expected solution.

<details>
  <summary>Solution</summary>
  NA
</details>
