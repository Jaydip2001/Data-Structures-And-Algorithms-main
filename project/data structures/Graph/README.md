# Graph

### Definition

Graph as data structures are actualy mathematical structures represented in programing language which describes relations between objects.

A graph consists of vertices(nodes) and edges(links), and these are undirected graphs but there is destinction in which we further describe relationships of objects.
The further classification is directed graphs where edges link two vertices in a meaningful direction.

A side from this basic classification we also have :
 - weighted graphs (every edge has assigned weight)
 - Mixed graph (some edges are directed and some are not)
 - Finite graphs
 - Infinite graphs
 - etc

Aside from components of graph, graphs can have certain properities :

- Isimorphic (even tho two graphs dont look same they have same number of edges and vertices withe the same degree)
- Circuit (while traversing every the whole graph we visit each vertex ony once)
- Path (while traversing the graph we can return to the same vertex)

There are much more properities that a graph can hold.

### Storage requirements

- can be sotred in static memory (using sequential representation, arrays)
- can be storec using dynamic memory (using linked represntation, list)

### Operational requirements

- create graph
- delete grapg
- insert edge
- remove edge
- insert vertex
- remove vertex
- search for vertex
- traverse graph