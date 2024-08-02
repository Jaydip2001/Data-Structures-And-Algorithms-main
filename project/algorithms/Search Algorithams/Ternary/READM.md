# Ternary Search

## Definition

Ternary search is also divide and conqure algoritham which divids array in to three parts. The algoritham requires sorted data structure just like binary search.
It performes better then binary (Log(n) base 2) because it cuts data sequence into 3 parts insted of 2, and by that achives
performance of Log(n) base 3. 

Division into three parts is being done by defining mid 1 and mid 2 and placing them to their correct thirds of the data sequence.
We reduce space of search by comparing the searched element with mid1 and mid2 and based on those comparisons we define new positions
for mid1 and mid2 until we finde the element or realise that the data sequence does not contain that element.


## Time Complexity

Worst case scenario is O(Log3(n)) in case that the element is last in the array.

Average case scenario is  θ(Log3(n)) 

and best case is Ω(1) if the element is first in the collection

## Space Complexity

O(1) for iterativ ; O(Log(n)) for recursive