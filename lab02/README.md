## Lab 02

  [Feedback form](https://docs.google.com/forms/d/e/1FAIpQLScLeIezAu3Bueokx98FzaNraoK_90lxMd6trBRnnNLXKQjojg/viewform?usp=sf_link) (Please fill this form, to give feedback about this lab)

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](https://sidhant007.github.io/CS2040C/lab02/content.pdf) (The pdf version of the ppt shown)

  [ListArray.cpp](https://sidhant007.github.io/CS2040C/lab02/ListArray.cpp) (The list array code shown in Tut01)

  [ListVector.cpp](https://sidhant007.github.io/CS2040C/lab02/ListVector.cpp) (Using vector instead of array in the list array code) (**Fixed a bug in insert function please go through this**)

  [Birthday.cpp](https://sidhant007.github.io/CS2040C/lab02/Birthday.cpp) (Birthday sorting problem. Highlights of this problem were - using tuple, using multiply with -1 for year, to sort in descending according to year)

  [set_intersection.cpp](https://sidhant007.github.io/CS2040C/lab02/set_intersection.cpp) (set intersection result of 2 sorted vectors)

  [findSumZ.cpp](https://sidhant007.github.io/CS2040C/lab02/findSumZ.cpp) (The problem states that given a sorted vector V and a target variable Z find 2 elements in V, such that the sum of those 2 elements is equal to z)

  **Apart from all this I would like you all to go through these function below for many different use cases** - 

  [nth_element](http://en.cppreference.com/w/cpp/algorithm/nth_element) (Can be useful for PS1 :o )

  [binary_search](http://en.cppreference.com/w/cpp/algorithm/binary_search) (This function assumes the vector/array to be already sorted)

  [lower_bound](http://en.cppreference.com/w/cpp/algorithm/lower_bound) (Assumes vector to be sorted. Also see upper_bound)
  
  [unique](http://en.cppreference.com/w/cpp/algorithm/unique) (Returns a iterator/pointer to the end of the resulting vector, see example for clarity)

  [set_intersection](http://en.cppreference.com/w/cpp/algorithm/set_intersection) (In the example given, this function uses [back_inserter()](http://en.cppreference.com/w/cpp/iterator/back_inserter))

  [set_union](http://en.cppreference.com/w/cpp/algorithm/set_union) (Similar to above one)
  
  [tuple](http://en.cppreference.com/w/cpp/utility/tuple/get) (See the example here, highlights are - can use auto to make_tuple() and can also do get&lt;data_type&gt; if ensured that there is only entry in the tuple having data_type)

**Challenge Questions** - 

Q) Given an already sorted vector V and a target variable Z in input, check if there exists 2 elements in v, such that x + y = z, where x and y both belong to V. **This should be done in O(n)** (Do note - The vector in this case is sorted already in input)

<details>
  <summary>Solution</summary>
  <pre>
  // Let the vector be V and the target be Z. Assuming V to be sorted.
  int l = 0;
  for(int r = (int)V.size() - 1; r >= 0; r--) {
    while(V[l] + V[r] < z and l + 1 < r)  l++;
    if(V[l] + V[r]  == z) {
      cout<<"Found --> "<<V[l]<<" "<<V[r]<<endl;
      break;
    }
  }
  </pre>
</details>

Q) Try to do set_union for 2 already sorted vectors A and B in O(n) using a 2-pointer style approach. (Will resemble to the merge operation in a merge sort)
**Update - 2 pointer approach basically means avoid using set_union and set_intersection**

<details>
  <summary>Solution</summary>

</details>

Q) Sort a collection of names (represented as strings using only 'a' - 'z' without any spaces) first based on ascending length of the names, incase of ties, break the ties by descending order of the names themselves (Ex. {"abc", "ab", "xyz"} in sorted order will be {"ab", "xyz", "abc"})

<details>
  <summary>Solution</summary>
  The broad idea is to make a pair<int, string> where pair.first = -1 * length_of_the_string and pair.second = the string itself, so now we sort a vector of these pairs and then reverse it. One alternate approach is to define your own comparator function and another alternate approach but slightly complicated is to remap 'a' to 'z' , 'b' to 'y', 'c' to 'x' and so on, now the strings will "kind of look like negated strings", so now you could just sort the entire thing, using +1 * length_of_the_string in pair.first.
</details>
