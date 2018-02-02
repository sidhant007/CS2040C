## Lab 02

  [Feedback form](https://docs.google.com/forms/d/e/1FAIpQLScLeIezAu3Bueokx98FzaNraoK_90lxMd6trBRnnNLXKQjojg/viewform?usp=sf_link) (Please fill this form, to give feedback about this lab)

Here is a pdf version of the ppt I covered during the lab. And the codes that I (skimmed through) / (demonstrated live).

  [content.pdf](https://sidhant007.github.io/CS2040C/lab02/content.pdf) (The pdf version of the ppt shown)

  [ListArray.cpp](https://sidhant007.github.io/CS2040C/lab02/ListArray.cpp) (The list array code shown in Tut01)

  [ListVector.cpp](https://sidhant007.github.io/CS2040C/lab01/ListVector.cpp) (Using vector instead of array in the list array code) 

  [Birthday.cpp](https://sidhant007.github.io/CS2040C/lab01/Birthday.cpp) (Birthday sorting problem. Highlights of this problem were - using tuple, using multiply with -1 for year, to sort in descending according to year)

  [set_intersection.cpp](https://sidhant007.github.io/CS2040C/lab01/set_intersection.cpp) (set intersection result of 2 sorted vectors)

  [findSumZ.cpp](https://sidhant007.github.io/CS2040C/lab01/findSumZ.cpp) (The problem states that given a sorted vector V and a target variable Z find 2 elements in V, such that the sum of those 2 elements is equal to z)

  Apart from all this I would like you all to go through these function below for many different use cases - 
  [nth_element](http://en.cppreference.com/w/cpp/algorithm/nth_element) (Can be useful for PS1 :o )
  [binary_search](http://en.cppreference.com/w/cpp/algorithm/binary_search) (This function assumes the vector/array to be already sorted)
  [lower_bound](http://en.cppreference.com/w/cpp/algorithm/lower_bound) (Assumes vector to be sorted. Also see upper_bound)
  [unique](http://en.cppreference.com/w/cpp/algorithm/unique) (Returns a iterator/pointer to the end of the resulting vector, see example for clarity)
  [set_intersection](http://en.cppreference.com/w/cpp/algorithm/set_intersection) (In the example given, this function uses [back_inserter()](http://en.cppreference.com/w/cpp/iterator/back_inserter))
  [set_union](http://en.cppreference.com/w/cpp/algorithm/set_union) (Similar to above one)
  [tuple](http://en.cppreference.com/w/cpp/utility/tuple/get) (See the example here, highlights are - can use auto to make_tuple() and can also do get<data_type> is ensured that there is only entry in the tuple having data_type)

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

Q) Try to do the REGISTER question using the mathematical approach, which we discussed in the lab.

<details>
  <summary>Solution</summary>
  <img src = "register_math.png">
  The above code is written by Srivastave Aaryam (one of the students)
</details>
