# Lab 10

  [Feedback form](https://docs.google.com/forms/d/e/1FAIpQLScLeIezAu3Bueokx98FzaNraoK_90lxMd6trBRnnNLXKQjojg/viewform?usp=sf_link) (Please fill this form, to give feedback about this lab)

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](https://sidhant007.github.io/CS2040C/lab10/content.pdf) (The pdf version of the ppt shown) 

## Challenge Questions - 

Q1) Given a directed weighted graph, find the length of the shortest path in this graph. Do note that all the edge weights in this graph can be positive / 0 / negative. The answer is not simply the smallest edge weight in the graph since, it is possible that there are 2 consecutive negative weight edges from a to b and then b to c. There can be other such cases, in which a path of more than 2 edges form a shorter distance. So think carefully. Also if there is a negative cycle then print -1, since the answer is then -infinity. <br>
(Easy version - O(V^3) or O(V * VE)) <br>
(Hard version - O(VE)) (Hint - Add something in this graph first) <br>

<details>
  <summary>Solution</summary>
  Easy version - Do Floyd-warshall or do bellman-ford from every source and take the minimum distance found. Notice that negative cycle can be found in both bellman-ford and floyd-warshall.
<br>
  Hard version - Add a dummy source and add 0 weighted edges from this source to all the nodes of the graph. Now run a bellman-ford from this source and find the shortest path to every other node. 
<br> 
  Incase you can relax the graph during the Vth iteration of the outer loop of Bellman-ford then it means there is a negative cycle. So simply print -1 or something to denote a negative cycle, otherwise print the shortest path found. Well, this is NOT completely correct, why ?? 
<br> 
  Because if the graph had only positive weighted edges, then this algorithm would give you the answer 0, whereas actually it would be the smallest edge weight. So that is the only corner case. If the graph only has non-negative weighted edges, then print the smallest edge weight, otherwise run the bellman ford from the dummy source and print -1 if negative cycle found otherwise the shortest path you find from the dummy source to any of the given nodes.
<br>
  Proof of correctness - You can prove by contradiction. Let us assume there was a path where d(u, v) is less than d(dummy_source, v). Now notice that d(dummy_source, v) must be less than or equal to d(dummy_source, u) + d(u, v) because from dummy_source to u we have an edge weight of 0. QED. 
</details>
  Incase you do not know how to check negative cycles using bellman-ford algorithm, refer to [this](https://www.dyclassroom.com/graph/detecting-negative-cycle-using-bellman-ford-algorithm)

Q2) Given a undirected weighted tree, i.e each edge of the tree has a weight on it. Do note that all the edge weights in this tree are POSITIVE only. Determine the longest path in this tree. <br>
(Easy version - O(V^3)) <br>
(Medium version - O(V^2)) <br>
(Hard version - O(V)) (Hint - Do 2 DFS) <br>

<details>
  <summary>Solution</summary>
  Easy version - Take a pair of nodes in this tree and find the length of the simple path between them. Do this for all pairs and take the maximum.
<br>
  Medium version - Make all the nodes of the tree the root of the tree one by one and run a dfs/bfs from this root. Find the longest path, i.e the farthest node found from the root in all the dfs/bfs and take the maximum.
<br>
  Hard version - Let node 1 be the root of the tree (picked arbitrarily). Now do a dfs/bdfs from this node and find the farthest node from this node. It is similar to PS5 A. Now let this farthest node from node 1 be u. Now do another dfs/bfs but this time, let the root be u and again find the farthest node. Let this fathest node be v. Then this distance from u to v is the longest path in this tree. This is formally known as the diameter of the tree. 
</details>
  Proof of correctness can be seen [here](https://stackoverflow.com/questions/20010472/proof-of-correctness-algorithm-for-diameter-of-a-tree-in-graph-theory)

Q3) Given an undirected weighted graph count the number of shortest paths from a given source to a given destination. Assume all the edge weights to be positive. Let us assume that the lenght of the shortest path from source to destination is x. Then what I need you to find is the total number of different routes from source to destination which we can take such that all of them take exactly x distance to reach. Do note, that you can assume that this total number of different routes can be fit into an integer of size 63 bit. Here 2 routes are considered different if they atleast differ in one of the edges they take in their path. <br>
This is a relatively harder question. <br>
(Hint - Use Djikstra only, but somethings are modified) <br>
(Hint - Can use Floyd Warshall also, but it will be slower) <br>

SPOILERS AHEAD

<details>
  <summary>Solution</summary>
  Modify the original djikstra a bit. Now maintain another named count[]. Here count[u] will now denote the number of shortest paths from source to u. So our answer would be count[v]. Now how do we calculate this. Explaining is hard so I am showing the pseudocode.
Let dist[u] denote the shortest path from source to u, in the below pseudocode and let vis[u] denote if node u has been processed or not.
</details>
~~~~
  count[src] = 1
  dist[src] = 0
  PQ.insert((src, 0)) // here (src, 0) = (node, distance)
  // Here PQ.top gives the smallest element according to distance and incase of tie, arbitrarily.
  while PQ is NOT empty
    Let (u, distance) = PQ.top
    PQ.pop
    if vis[u] is true then continue
    otherwise 
      vis[u] = true
      for all outgoing edge from u, let it be (v, w) // here (v, w) = (outgoing node, weight of the edge)
        if dist[v] > dist[u] + w then
          dist[v] = dist[u] + w
          PQ.insert((v, dist[v]))
          count[v] = count[u] // !!Important
        else if dist[v] == dist[u] + w then
          count[v] += count[u] // !!Important
  print count[destination] 
~~~~
