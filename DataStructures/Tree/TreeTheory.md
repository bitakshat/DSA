## Tree
---
### Tree Terminologies
- Edge: The link between two nodes (also called branches)
- Degree of node: Number of subtrees having this node as a root.
- Degree of tree: The maximum of degree fo the nodes of tree.
 - Degree of tree = max (degree(node i) for I = 1 to n)
- Height (of a tree): Number of edges in longest path from root to a leaf node.
- Level (of a node): The number of edges from node to root + 1.
- Depth (of node): Number of edges in path from root to node x. 
- Forest: Set of disjoint tree. (In a given tree, if you remove its root node then it becomes a forest).
---
- Number of edges in a tree with **n nodes**: (n - 1)
- Maximum no of nodes at level i = <code>2<sup>i</sup></code>
- Maximum no of nodes in a tree with height h = <code>2<sup>0</sup>+2<sup>1</sup>+2<sup>2</sup>......+2<sup>3</sup></code> or <code>2<sup>h</sup> - 1</code>
- Level of Tree: <code>ceil(log<sub>2</sub>(n))</code>
<!-- - Height of perfect binary tree with n nodes: <code>log<sub>2</sub><sup>(n + 1)</sup> - 1</code> -->
- Height of Tree with n nodes: <code>floor(log<sub>2</sub>n)</code> (n = Number of Nodes)
- Height of an <code>*empty tree: -1*</code> and <code>tree with one node = 0*</code>
---
### For complete tree using arrays
- for node at index i
  - left-child index = <code>2i + 1</code>
  - right-child index = <code>2i + 2</code>
---
## Tree Traversal
- Depth First Traversals:
  (a) Preorder(root, left, right)
  (b) Inorder(left, root, right)
  (c) Postorder(left, right, root)

- Breadth First or Level-Order Traversal
  - (left, right)