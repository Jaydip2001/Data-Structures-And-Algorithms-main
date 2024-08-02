# Binary Search

## Definition

Binary search unlike linear search has better time when searching in larger sets of data, but it requires sorted collection.
This performance is achived by dividing the data structure in half and then performing search only in that half that contains that element.
The division of collection in half is continued until we have only one element and that is the element we searched for or we found the element to be the on in the half.  

## Time Complexity

Worst case scenario is O(Log(n)) in case that the element is last in the array.

Average case scenario is  θ(Log(n)) 

and best case is Ω(1) if the element is first in the collection

## Space Complexity

O(1) for iterativ ; O(Log(n)) for recursive