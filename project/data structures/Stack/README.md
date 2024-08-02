# Stack

### Definition

A stack is a linear data structure in which insertion and deletion of elements are done at only one end, whichis known as Top of stack. 

The last element that is inserted will be the first element to be deleted. Therefore, this is referred to as a Last In First Out (LIFO) structure.

Stacks have practical uses such as :
 - Arithmetic expression evaluation (prefix, postfix, infix) and expresion conversion
 - Recursion (to stack up function calls and to execute them in correct order)
 - Balancing of the matching parenthesis (evaluating if parenthesis in an expresion are in correct order)

### Storage Requirements

- Can be implemented in dynamic memory using linked list
- Can be implemented in static memory using array

### Operational Requirements

- PUSH (inesert element onto the stack)
- POP (remove element from the stack)
- IsEmpty (check if stack is empty)
- Create (Create new empty stack)