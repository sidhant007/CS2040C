# Lab 05

  [Feedback form](https://docs.google.com/forms/d/e/1FAIpQLScLeIezAu3Bueokx98FzaNraoK_90lxMd6trBRnnNLXKQjojg/viewform?usp=sf_link) (Please fill this form, to give feedback about this lab)

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](https://sidhant007.github.io/CS2040C/lab05/content.pdf) (The pdf version of the ppt shown) 

  [BinaryHeapDemo.cpp](https://sidhant007.github.io/CS2040C/lab05/BinaryHeapDemo.cpp) (The Binary Heap demo implementation)

  [unordered_map.cpp](https://sidhant007.github.io/CS2040C/lab05/unordered_map.cpp) (The unordered_map demo code)

  [KattisCD_using_unordered_set.cpp](https://sidhant007.github.io/CS2040C/lab05/KattisCD_using_unordered_set.cpp) (The solution code for the problem <a href = "https://open.kattis.com/problems/cd">Kattis CD</a> discussed in the lab which involves the use of unordered_set)

  [KattisCD_using_2_ptr.cpp](https://sidhant007.github.io/CS2040C/lab05/KattisCD_using_2_ptr.cpp) (Same problem, different approach. Now done using 2 pointer method)

## Challenge Questions - 

Q) Given a node x of a binary heap, it must have a sibling right, i.e if y is the parent of x. Then y has 2 children x and z. So x is a sibling of z. Now assume that you are given a heap such that each node has a sibling except the root node, i.e it is a complete binary heap. Also assume that the notation used in our approach of heap is the same as shown in the demo code, i.e parent of indice "i" has indice "i/2". Similarly left child of indice "i" is "2 * i" and right child is "2 * i + 1". You have to write the function bool amIOlder(int x) which takes in one argument x and returns true if val[x] > val[sibling(x)], where sibling(x) = z, in the definition above, otherwise it returns false. Here val[] refers to the values in the heap. 

So the question in literal sense wants you to tell whether x is the bigger sibling or z is the bigger one.

NOTE - The solution is straightforward if you are allowed to use everything, so we have the restriction, i.e you can have only one statement inside the function and you are not allowed to use GOTO/IF/WHILE/FOR or any other kind of looping structure.

Example of an incorrect implementation of the function would be - 
~~~~
bool amIOlder(int x) { 
  return val[x] > val[x/2]; //This is just a single line.
  // This function would actually tell if x is older than its parent or not.
  // We actually wanted the same thing but for sibling of x, i.e z in the explanation above.
} 
~~~~

<details>
  <summary>Solution</summary>
  
</details>

Q) NA 
<details>
  <summary>Solution</summary>
  TBA
</details>

Q) NA

<details>
  <summary>Solution</summary>
  TBA
</details>
