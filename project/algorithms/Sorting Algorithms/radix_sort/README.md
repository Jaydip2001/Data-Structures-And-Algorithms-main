# Radix Sort

## Definition

This sorting algorithm is used on numbers with more then one digit (ex. 23, 56, 120).
Sorting is being performed by taking only one digit from the whole number and sorting them with respect to that number only.
We start sorting the data sequence by last digits first then we continue from there.

## Explanation

- Step 1 
  - Find the largest number (the number with most digits)
- Step 2 
  - Separate digit of interest from the whole number (starting from last digit)
- Step 3 
  - Sort all elements by their separated digit
- Step 4
  - Repeat step 2 and 3 until we sort the first digit of each number

### Illustration 

<p align="center">
  <img width="70%" src="https://user-images.githubusercontent.com/45321513/212158269-139be36e-8e8f-43d5-b5fb-e38bac3a7b15.png" />
  <p align="center">Example 2</p>
</p>

## Time colpexity

Insertion sort worst case scenario is O(n*log(n)), as is average θ(n*log(n)) and best case Ω(n).

### Space complexity

O(n)
