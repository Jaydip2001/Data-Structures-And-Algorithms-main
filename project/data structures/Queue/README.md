# Queue

### Definition

 Queue is a linear data structure in which insertions are made at one end called rear, and deletions are made
at the other end called front. A queue is also known as a structure that models the fi rst-come fi rst-serve order
or equivalently the fi rst-in fi rst-out ( FIFO) order. Th at is, the element that is inserted fi rst into the queue will
be the element to be deleted fi rst, and the element that is inserted last is deleted last. Th e insertion operation
in the queue is also known as enqueue, and deletion is also referred as deque. Th e main diff erence between a
queue and a stack is that elements in a queue are put at the bottom and taken off from the top whereas in a
stack, elements put at the top and taken off from the top.

Examples
 • An electronic mailbox
 • A waiting line in a store, at a service counter, on a one-lane road, at a bank, at a bus stop, playlist for
jukebox, etc.
 • Equal-priority processes waiting to run on a processor in a computer system
 • Printer jobs
 • CPU processes
Queues are more diffi cult to implement than stacks, because operations are performed at both the ends.
Th e simplest implementation uses an array, adds elements at one end and moves all the elements when one of
the elements is taken out of the queue

### Storage Requirements

- Can be implemented in dynamic memory using linked list
- Can be implemented in static memory using array

### Operational Requirements

- Insert (Enqueue) - inesert element into the queue
- Remove (Dequeue) - remove element from the queue
- IsEmpty - check if queue is empty
- Create - Create new queue stack