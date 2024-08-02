# Fibonacci Search

## Definition

Fibonacci search is comparison based algorithm which is uses divide and conqure principle.
Fibonacci just as binary requires sorted data sets to perform search, but it splits set of data
into parts corresponding to Fibonnaci sequnce numbers instead of halfs like binary does.

## Explenation

- Step 1
  - Find first number f in fibonnaci sequence that is smaller then or equel to n
  - Calculate two preceding numbers f-1 and f-2

## Time Complexity

Worst case scenario is O(Log(n)) in case that the element is last in the array.

Average case scenario is  θ(Log(n)) 

and best case is Ω(1) if the element is first in the collection

## Space Complexity

O(1) for iterativ ; O(Log(n)) for recursive