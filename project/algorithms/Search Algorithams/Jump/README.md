# Jump Search

## Definition

Jump search is an algorithm that performs jumps by a a certain interval m to reduce number of elements that it checks.
This makes it slightly faster then linear search but still not faster then binary search.
Jump search algoritham requires pre-sorted list in order to function correctly.

## Explenation

- Step 1
  - Determin the jump interval/block of size m (we can take sqare root of n to be m block)
- Step 2
  - Perform comparisons on the current element observed and the element we search for
  - If elements are equel > return that element
  - If current element observed is less then element we search for -> continue jumping
  - If it is greater then element we search for -> perform linear search in that block
  

## Time Complexity

Worst case scenario is O(sqrt(n)) in case that the element is last in the array.

Average case scenario is  θ(sqrt(n)) 

and best case is Ω(1) if the element is first in the collection

## Space Complexity

O(1) for iterativ ; O(Log(n)) for recursive
