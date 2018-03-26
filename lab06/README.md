# Lab 06

  [Feedback form](https://docs.google.com/forms/d/e/1FAIpQLScLeIezAu3Bueokx98FzaNraoK_90lxMd6trBRnnNLXKQjojg/viewform?usp=sf_link) (Please fill this form, to give feedback about this lab)

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](https://sidhant007.github.io/CS2040C/lab06/content.pdf) (The pdf version of the ppt shown) 

  [map.cpp](https://sidhant007.github.io/CS2040C/lab06/map.cpp) (The map demo code)

  [IndexingCityNames.cpp](https://sidhant007.github.io/CS2040C/lab06/IndexingCityNames.cpp) (The code for the problem of indexing city names discussed in one of the slides)

  [KattisCompoundWords.cpp](https://sidhant007.github.io/CS2040C/lab06/KattisCompoundWords.cpp) (The solution code for the problem <a href = "https://open.kattis.com/problems/compoundwords">Kattis Compound Words</a> discussed in the lab which involves the use of set/map/set_intersection)

## Challenge Questions - 

Q) Try to the Kattis Compound Words question using O(N) memory. Assume that all the strings are of small length and therefore the length of the strings does not affect the memory analysis. Our original approach in the lab was putting O(N^2) strings in a set, which therefore requires O(N^2) memory. Now I want you to restrict the usage of at most O(N) memory and still print out all the N^2 strings. Do note that you would still be printing N^2 strings, which does not mean usage of N^2 memory. 

Hint - Try to generate all the strings in a systematic manner such that you get them in sorted order. Use a heap / priority_queue.

~~~~
NA
~~~~

<details>
  <summary>Solution</summary>
  The solution idea is this - 
  <br>
  Sort the strings in ascending order and label them s1 &lt; s2 &lt; ... &lt; sn.
  <br>
  Observe that s1 + s2 &lt; s1 + s3 &lt; s1 + s4 &lt; ... &lt; s1 + sn. Let this be equation 1.
  <br>
  Similarly, s2 + s1 &lt; s2 + s3 &lt; s2 + s4 &lt; ... &lt; s2 + sn. Let this be equation 2.
  <br>
  And so on till - sn + s1 &lt; sn + s2 &lt; sn + s3 &lt; ... &lt; sn + s(n - 1). Let this be equation n.
  <br>
  Create a priority queue of strings which sorts them in ascending order, so techincally a min heap. Label it pq. 
  <br>
  Push in {s1 + s2, s2 + s1, s3 + s1, s4 + s1, ..., sn + s1} inside the PQ, i.e all the first terms in equation 1, equation 2, equation 3, ... equation n.
  <br>
  Now pick the top element of pq, print it. Pop it. Then let us say this element of s(x) + s(y), then because you popped s(x) + s(y), you should push in s(x) + s(y + 1) inside the pq. Here I assume s(x) = x_th string.
  <br>
  Keep on doing this. Do note, that s(x) &neq; s(y + 1), when pushing s(x) + s(y + 1).
  <br>
  The intutive idea of the algo was to first take the min term out of all the first terms in equation 1, equation 2, ... equation n. Then for that particular equation which gave the min term, move to the second term for that equation. And again take the minimum. So keep on taking the minimum term, and shifting the pointer for the equation which gives the minimum by 1 to the right.
  <br>
  Net time complexity is O(c * N * N * log(N)), where c is the average length of the characters. And the memory complexity is O(c * N) = O(N), when c is small enough to be ignored.
</details>
