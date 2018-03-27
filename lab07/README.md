# Lab 07

  [Feedback form](https://docs.google.com/forms/d/e/1FAIpQLScLeIezAu3Bueokx98FzaNraoK_90lxMd6trBRnnNLXKQjojg/viewform?usp=sf_link) (Please fill this form, to give feedback about this lab)

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](https://sidhant007.github.io/CS2040C/lab07/content.pdf) (The pdf version of the ppt shown) 

  [AMtoEL.cpp](https://sidhant007.github.io/CS2040C/lab07/AMtoEL.cpp) (The code shown for converting Adjacency Matrix to Edge List)

  [MockPE3Solution.cpp](https://sidhant007.github.io/CS2040C/lab07/MockPE3Solution.cpp) (The code for the Mock PE3 which is same as CS2040C PE(Practical Exam) S1 (Semester 1) Q1 (Question 1))

## Challenge Questions - 

Q) Water jug problem. Given 3 jugs of size a, b and c liters respectively and an infinite supply of water from a tap. You can tranfer water from one jug to another, but note that you cannot measure things, meaning if you are pouring from jug 1 to jug 2, then you just pour until either jug 1 becomes empty or till the time jug 2 gets full, whichever happens first. Also when you fill a jug using the tap, you fill it to the full. You are also allowed to empty a jug by throwing its content into a infinite sized dustbin. Given all these conditions, determine the minimum no. of steps required to obtain exactly d liters of water in jug 1 which has capacity of a liters. Filling from a tap is a single step, tranferring from one jug to another is 1 step and also emptying a jug is 1 step.
Assume all the integers a, b, c and d lie between [1, 50]. Also if it is not possible to obtain exactly d liters of water in jug 1 of capacity a liters, then print -1.
A better descrption of the problem can be seen from [here](https://en.wikipedia.org/wiki/Water_pouring_puzzle)

Example - 
a = 3, b = 5, c = 8, d = 2
Answer = 4 (Fill b. Then tranfer from b to a. Then empty a. Then again tranfer from b to a)

Hint - This question should have a pure mathematical approach (probably, although I don't know the method for 3 jugs). The approach I am expecting is based on graph theory. Note, you would need to be know about bfs and dfs before trying this question.

~~~~
NA
~~~~

<details>
  <summary>Solution</summary>
  TBA
</details>
