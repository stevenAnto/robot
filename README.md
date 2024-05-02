# Problema
3 1
2 4 5

**B. Closest to the left**

*time limit per test* 1 second  
*memory limit per test* 256 megabytes

inputstandard input  
outputstandard output

Given an array of n  numbers (1 -indexed), sorted in non-decreasing order, and k
 queries. For each query, print the maximum index of an array element not greater than the given one.

**Input**  
The first line of the input contains integers n  and k (0<n,k≤106)
, the length of the array and the number of queries. The second line contains n
 elements of the array, sorted in non-decreasing order. The third line contains k
 queries. All array elements and queries are integers, each of which does not exceed 109
 in absolute value.

**Output**  
For each of the k  queries, print the maximum index of an array element not greater than the given one. If there are none, print 0.

**Input**
5 5
3 3 5 8 9
2
4
8
1
10

**Output** 
0
2
4
0
5
