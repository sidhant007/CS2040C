# Lab 10

  [Feedback form](https://docs.google.com/forms/d/e/1FAIpQLScLeIezAu3Bueokx98FzaNraoK_90lxMd6trBRnnNLXKQjojg/viewform?usp=sf_link) (Please fill this form, to give feedback about this lab)

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](https://sidhant007.github.io/CS2040C/lab10/content.pdf) (The pdf version of the ppt shown) 

## Challenge Questions - 

Q1) Given a directed weighted graph, find the length of the shortest path in this graph. Do note that all the edge weights in this graph can be positive / 0 / negative. The answer is not simply the smallest edge weight in the graph since, it is possible that there are 2 consecutive negative weight edges from a to b and then b to c. There can be other such cases, in which a path of more than 2 edges form a shorter distance. So think carefully. Also if there is a negative cycle then print -1, since the answer is then -infinity. <br>
(Easy version - O(V^3) or O(V * VE))
(Hard version - O(VE)) (Hint - Add something in this graph first)

Q2) Given a undirected weighted tree, i.e each edge of the tree has a weight on it. Do note that all the edge weights in this tree are POSITIVE only. Determine the longest path in this tree. <br>
(Easy version - O(V^3))
(Medium version - O(V^2))
(Hard version - O(V)) (Hint - Do 2 DFS)

Q3) Given an undirected weighted graph count the number of shortest paths from a given source to a given destination. Assume all the edge weights to be positive. Let us assume that the lenght of the shortest path from source to destination is x. Then what I need you to find is the total number of different routes from source to destination which we can take such that all of them take exactly x distance to reach. Do note, that you can assume that this total number of different routes can be fit into an integer of size 63 bit. Here 2 routes are considered different if they atleast differ in one of the edges they take in their path.
This is a relatively harder question.
(Hint - Use Djikstra only, but think smartly)
(Hint - Can use Floyd Warshall also, but it will be slower)
