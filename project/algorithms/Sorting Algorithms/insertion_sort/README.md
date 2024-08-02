# Insertion Sort

## Definition

This sorting algorithm sorts the array by inserting each element in their appropriate positions. 
Let A be the unordered list with elements A = a1,a2,...,an.
The insertion sort algorithm scans a1 to an, inserting each element ak into its proper position in the sorted sublist of predecessors 
{a1,a2,...,ak-1} where k is the key element position that is to be inserted.

## Explanation

- Step 1
  - A2 is compared with its sorted sublist of its predecessors, i.e. {A1} and A2 is inserted either after or
    before A1 so that {A1,A2} will be in the sorted order.

- Step 2
  - A3 is compared with its sorted sublist of its predecessors, i.e. {A1,A2}, and A3 is inserted at its proper
    position so that {A1,A2,A3} is in sorted order.

- Step n
  - An is compared with its sorted sublist of predecessor, i.e. {A1,A2,...,An-1}, and An is inserted at its
    proper position so that {A1,A2,...,An} is in sorted order.

This algorithm takes n comparisons and is useful only when n is small. 

### Ilustration 

<p align="center">
  <img width="60%" src="https://user-images.githubusercontent.com/45321513/193411761-0fbd7bfe-6f00-4519-9b10-ab6208811126.jpg" />
  <p align="center">Example 1</p>
</p>

<p align="center">
  <img width="60%" src="https://user-images.githubusercontent.com/45321513/212157494-3db5204a-a6ea-45c2-a8d4-bfbca98c6102.png" />
  <p align="center">Example 2</p>
</p>

## Time colpexity

Insertion sort worst case scenario is O(n^2), as is average θ(n^2)

but the best case can be Ω(n).

### Space complexity

O(n)
