# Interpolation Search

## Definition

Interpolation search performes search on sorted lists with uniformly distributed values.
These properities must be fulfiled in order to use formula which very acuritly gives us the position of the searched element.
In case that the position is not correct we slightly change the parameters that the formula takes and perform recalculation.


## Time Complexity

Worst case scenario is O(n) in case that the element is last in the array.

Average case scenario is  θ(Log(Log(n))) 

and best case is Ω(1) if the element is first in the collection

## Space Complexity

O(1) for iterativ ; O(Log(n)) for recursive