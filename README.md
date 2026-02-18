# Binary Tree Traversal – PrintBig

A C program that traverses a binary tree and prints all node values greater than or equal to a given threshold.

## Problem
Given a binary tree and an integer value, print all nodes in the tree whose data is greater than or equal to that value.

## Function
```c
void PrintBig(struct tree_node *current_ptr, int value);
```

## Example
For a tree containing: 2, 5, 7, 10, 12, 15, 20

Input value: 10
Output: 10 12 15 20

## Concepts Used
- Binary tree data structures
- Recursive in-order traversal
- Dynamic memory allocation with malloc
- Struct-based linked node design

## Course
Computer Science I – University of Central Florida
