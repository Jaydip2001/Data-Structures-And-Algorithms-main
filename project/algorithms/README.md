# Algorithams

## Definition

An algorithm is a step-by-step process of solving a problem. 
However, a problem can be solved in many ways. 
Among them, the best is selected based on the amount of space and execution time it requires. 
The algorithms are the prior written steps to the implementation of software. 
Many algorithms may be designed as a solution for a given problem. 
The algorithm shows the clear path to get the required software solution. 
It is a mathematical procedure or notation to represent the solution of a problem. 

## PROPERTIES OF THE BEST ALGORITHMS

Suppose there are a set of algorithms to a problem. Among all the algorithms, the best algorithm will have the
following properties:
 - Takes less time for the complete execution (time complexity)
 - Takes less memory space (space complexity)
 - Correctness of the solution
 - Modularity
 - Maintainability
 - Robustness
 - Reliability
 - Scalability
 - Functionality
 - Extensibility
 - Security
 - Simplicity
 - User-friendliness
 - Less programming time

## Space Complexity

The number of units of space the algorithm requires is called a space complexity of the algorithm.
Space complexity depends on the data types used and number of data items used.
Space complexity of a program is the total memory space required at the execution time of an algorithm. 

Each and every executable program will have the following sections and occupies memory:

- Text section (for all processor instructions of the program necessary to be executed in algorithm)

- Data section (for varaibles used in the algorithm)

- Rodata section (for read onyl data - constants)

- Bss section (for uninitialized global variables and static variables)

- Heap section (for all dynamically created data of the algoritham - this happens only on runtime)

- Stack section (for uninitialized local variables, formal parameters, frame pointer and function return pointer)

The space complexity of one algoritham would be the acumulation of used memmory in all sections.

Space complexity = instruction space (program and cpu instructions) + data space (data + rodata + bss) + stack space (array bytes + fucntion pointers) 

## Time Complexity

Time complexity of a program can be defi ned as the total time taken for compilation and execution of an algorithm.
The program has to be compiled before running it. Once the compilation process creates the executable binary file, to
run the program, compilation is not required as long as there are no changes in the code. An executable binary
file is required to run a program. Hence, consider only the execution time for calculating the time complexity.

The time complexity depends on the space complexity that the program uses, time taken to load the program, 
total number of executable instructions in the binary file, number of control loops present, number
of function calls made, number of arithmetic operations used, number of console input/output operations,
number of read/write locks and finally the input values of the program.

Apriori analysis is an theoretical approach that uses mathematics to evaluate time complexity of an algorithm.
Along with apriori time complexity analysis we use asymptotic notations to count steps of an algoritham.

Most used notations :
 - Big oh notation (O) - takes the upper bound of function 
 - Omega notation (Ω) - takes maximum possible lower bound of function
 - Theta notation (θ) - takes value that lies in between the upper bound and maximum possible lower bound

The number of steps an algorithm takes can be known when it is executed on the given input instance. To
check the correctness of the algorithm, execute it for all instances. An algorithm when executed on all possible
instances of data, the best, worst and average case complexities can be estimated.

The worst case complexity of an algorithm is when the algorithm takes maximum number of steps on any
instance of size n. The Big oh time complexity can be called as worst case.

The average case complexity of an algorithm is when the algorithm takes the average number of steps on any
instance of size n.The Theta time complexity can be called as average case.

The best case complexity of an algorithm is when the algorithm takes the minimum number of steps on any
instance of size n. The Omega time complexity can be called as best case.

## Types of Algorithams

- Brute Force Algorithms (simple solution for a problem)
- Divide and Conquer Algorithms (divides problem in to more lesser problems then solves them as such)
- Dynamic Programming Algorithms (optimizes the performance of already found solution to problems )
- Greedy Algorithms (builds partial solution to a problem then continues to build on that partial solution another partial soultion and so on)
- Recursive Algorithms (algorithams based on recursion - repetitive call of the same function)
- Back Tracking Algorithms (trys to find all soltions to a problem if solution turns to be bad we stop building on that soultion and we continue on others)
- Randomized Algorithms (uses random numbers to decide its further actions)
- Hashing algorithams (simular to search algorithams but it uses keys to assign postions of data)