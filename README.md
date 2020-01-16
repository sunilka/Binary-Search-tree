# Binary-Search-tree
Insert an element into the binary search tree

Binary Search Tree, is a node-based binary tree data structure which has the following properties:
  1) The left subtree of a node contains only nodes with keys lesser than the node’s key.
  2) The right subtree of a node contains only nodes with keys greater than the node’s key.
  3) The left and right subtree each must also be a binary search tree.
  4) There must be no duplicate nodes.
 
The above properties of Binary Search Tree provide an ordering among keys so that the operations like search, minimum and maximum can be done fast. If there is no ordering, then we may have to compare every key to search a given key.

Insertion of a key:
A new key is always inserted at leaf. We start searching a key from root till we hit a leaf node. Once a leaf node is found, the new node is added as a child of the leaf node.

         100                               100
        /   \        Insert 40            /    \
      20     500    --------->          20     500 
     /  \                              /  \  
    10   30                           10   30
                                              \   
                                              40
