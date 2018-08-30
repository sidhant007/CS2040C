## Lab 01

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](content.pdf) (The pdf version of the ppt shown) [To be uploaded]

  [vectors.cpp](vectors.cpp) (in-built functions of vectors and algorithms) [To be uploaded]

  [strings.cpp](strings.cpp) (in-built functions of strings and algorithms) [To be uploaded]

  [sideways_sorting.cpp](sideways_sorting.cpp) (Solution to [this](https://open.kattis.com/problems/sidewayssorting) problem) [To be uploaded]

Challenge Questions -

Q) Given a string, check if it is a palindrome or NOT without using any kind of loops / goto / recursive statements.

<details>
  <summary>Solution</summary>
   Use reverse(s.begin(), s.end()), where s is the string.
</details>

Q) Given a list of names, how would you sort these names in alphabetical order ?

<details>
  <summary>Solution</summary>
  Push all the names as strings in a vector&lt;string&gt; V, then use sort(V.begin(), V.end())
</details>
