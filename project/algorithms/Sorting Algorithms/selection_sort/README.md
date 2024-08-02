# Selection Sort

## Definition

Selection sort works by sellecting depending on sorting order smallest or largest element of the list
and placing them at the beginning of the list. After that selects the second smallest/larrgest element 
and places it at the second slot of the list. The algoriham continues to do so until we have a sorted list.
Even tho that is very simple it grants slightly faster results comparing to bubble sort.

## Explanation

- Step 1
  -  In the first pass find the position POS of the smallest element in the list of n elements. 
     Then swap POS with the first element of the list so that the first smallest element acquires its right position, the first position
     in the list.

- Step 2
  - In the second pass find the position POS of the second smallest element in the list of n–1 elements.
    Swap POS with second element of the list.

- Step n
  -  In the (n–1)th pass excluding the first two elements in the list repeat the sorting process by finding the
     next smallest element and swap it with an appropriate element until the entire list is sorted. The entire sorting
     takes (n–1) passes.

This algorithm is consisted of two distinct operations, finding the smallest element and positioning it in the right slot. 

### Ilustration 

<p align="center">
  <img width="60%" src="https://user-images.githubusercontent.com/45321513/193411714-47d4389a-6334-4042-bb7d-a7ff0d11e596.jpg" />
  <p align="center">Example 1</p>
</p>

<p align="center">
  <img width="60%" src="https://user-images.githubusercontent.com/45321513/212156905-9f58ef88-3495-422d-b508-e74096ad7700.png" />
  <p align="center">Example 2</p>
</p>

## Time colpexity

Insertion sort worst case scenario is O(n^2), as is average θ(n^2) and best case Ω(n^2).

### Space complexity

O(n)
