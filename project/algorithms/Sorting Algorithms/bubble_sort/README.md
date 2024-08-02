# Bubble sort

### Definition

The simplest sorting algorithm is bubble sort.

Bubble sort works by iterating down an array to be sorted from the first element to the last
comparing each pair of elements and swapping their positions if necessary.

This process is repeated as many times as necessary until the array is sorted.

Let L be an unordered list with elements A1,A2,A3,...,An. 
Bubble sort ordered these elements in their increasing order
that is L={A1,A2,A3,...,An}, where A1≤A2≤A3≤...An.

### Explanation

- Step 1
  - A1 and A2 are compared and if they are out of order, then interchange so that A1≤A2. Then compare A2
    and A3 and interchange so that A2 ≤ A3. Th is process is repeated for all n elements. When this step is completed
    observe that the largest element is “bubbled up” to the nth position, i.e. An contains the largest element. Here
    n-1 comparisons take place.

- Step 2
  - Repeating Step 1 with one fewer comparison, i.e. up to n–2 elements. After this step the second largest
    element is stored in the n–1th location.

- Step n-1
  - Finally at the n–1th comparison, compare A1 and A2 and interchange so that A1<A2. After the n–1
    comparisons the list will be in the sorted order.

### Illustration

<p align="center">
  <img width="70%" src="https://user-images.githubusercontent.com/45321513/193410093-fa8f6fa1-b687-4b4f-880a-0c0cb1e960c6.jpg" />
  <p align="center">Example 2</p>
</p>

<p align="center">
  <img width="70%" src="https://user-images.githubusercontent.com/45321513/212157340-d3a6a740-12ce-421c-9ba6-d2d6ef9a338f.png" />
  <p align="center">Example 2</p>
</p>

### Time complexity

Bubble sort worst case scenario is O (n^2), as is average θ(n^2) and worst case  Ω(n^2).

### Space complexity

O(n)

