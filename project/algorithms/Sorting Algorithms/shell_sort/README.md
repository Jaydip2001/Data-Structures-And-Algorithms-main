# Shell Sort

## Definition

Shell sort is a sorting algorithm that is a generalization of insertion sort which makes use of its better performance when sorting
partialy sorted and sorted arrays.

Shell sort arranges data sequence in to n/2 number of sub-lists and sorts the elements of the sub-lists so that the data sequence is partially sorted.
The arangeing is being done by calculating the interval and picking elements that are positioned at the beginning and end
of each interval from original array.
The process of arangeing data sequence is being done until the columns become narrower arrays with a smaller number of elements.
Finaly when we reach the last step, the array consists of only one column. 


## Explanation

- Step 1 
  - Calculate interval by dividing the size of array (n) with 2^k (n/2^k); where k is an integer that represents iteration of the shell sort 
- Step 2 
  - Divide the list into smaller sub-list by taking first and last element of interval for as many intervals that can fit in to n sized array
- Step 3 
  - Sort the sub-lists using insertion sort to make partialy sorted sub-lists
- Step 4
  - Repeat steps 1,2 and 3 until interval becomes 1 and we perform insertion sort on whole partialy sorted list

### Illustration 

<p align="center">
  <img width="70%" src="https://user-images.githubusercontent.com/45321513/212158481-e8d1cb8b-7e38-42c1-9c58-d808209eb9de.png" />
  <p align="center">Example 1; Part 1</p>
</p>

<p align="center">
  <img width="70%" src="https://user-images.githubusercontent.com/45321513/212159088-a145b10f-9c04-45ed-96f0-c8807e32dd80.png" />
  <p align="center">Example 1; Part 2</p>
</p>

<p align="center">
  <img width="70%" src="https://user-images.githubusercontent.com/45321513/212159249-a2e5c31f-ad2d-4050-8c6e-d5fe9452ddc0.png" />
  <p align="center">Example 1; Part 3</p>
</p>

## Time colpexity

Insertion sort worst case scenario is O(n^2), as is average θ(n*log(n)) and best case Ω(n*log(n)).

### Space complexity

O(n)
