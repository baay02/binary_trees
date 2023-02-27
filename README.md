C - Binary trees

https://camo.githubusercontent.com/e8ef92534fe7e36efb175e673a5e82505ac64b5ab9536532b19203644f0f4b9f/68747470733a2f2f7777772e7475746f7269616c73706f696e742e636f6d2f646174615f737472756374757265735f616c676f726974686d732f696d616765732f62696e6172795f747265652e6a7067

Resources
Read or watch:

Binary tree (note the first line: Not to be confused with B-tree.)
Data Structure and Algorithms - Tree
Tree Traversal
Binary Search Tree
Data structures: Binary Tree

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What is a binary tree
What is the difference between a binary tree and a Binary Search Tree
What is the possible gain in terms of time complexity compared to linked lists
What are the depth, the height, the size of a binary tree
What are the different traversal methods to go through a binary tree
What is a complete, a full, a perfect, a balanced binary tree

Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements

General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are allowed to use the standard library
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called binary_trees.h
Don’t forget to push your header file
All your header files should be include guarded

GitHub
There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

Tests ✔️
tests: Folder of test files for all tasks. Provided by ALX.
Helper File 🙌
binary_tree_print.c: C function that prints binary trees in a pretty way.
Header File 📁
binary_trees.h: Header file containing definitions and prototypes for all types and functions written for the project.
Data Structures

struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
Function Prototypes

File	Prototype
binary_tree_print.c	void binary_tree_print(const binary_tree_t *tree)
0-binary_tree_node.c	binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
1-binary_tree_insert_left.c	binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
2-binary_tree_insert_right.c	binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
3-binary_tree_delete.c	void binary_tree_delete(binary_tree_t *tree);
4-binary_tree_is_leaf.c	int binary_tree_is_leaf(const binary_tree_t *node);
5-binary_tree_is_root.c	int binary_tree_is_root(const binary_tree_t *node);
6-binary_tree_preorder.c	void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
7-binary_tree_inorder.c	void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
8-binary_tree_postorder.c	void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
9-binary_tree_height.c	size_t binary_tree_height(const binary_tree_t *tree);
10-binary_tree_depth.c	size_t binary_tree_depth(const binary_tree_t *tree);
11-binary_tree_size.c	size_t binary_tree_size(const binary_tree_t *tree);
12-binary_tree_leaves.c	size_t binary_tree_leaves(const binary_tree_t *tree);
13-binary_tree_nodes.c	size_t binary_tree_nodes(const binary_tree_t *tree);
14-binary_tree_balance.c	int binary_tree_balance(const binary_tree_t *tree);
15-binary_tree_is_full.c	int binary_tree_is_full(const binary_tree_t *tree);
16-binary_tree_is_perfect.c	int binary_tree_is_perfect(const binary_tree_t *tree);
17-binary_tree_sibling.c	binary_tree_t *binary_tree_sibling(binary_tree_t *node);
18-binary_tree_uncle.c	binary_tree_t *binary_tree_uncle(binary_tree_t *node);
100-binary_trees_ancestor.c	binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
101-binary_tree_levelorder.c	void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
102-binary_tree_is_complete.c	int binary_tree_is_complete(const binary_tree_t *tree);
103-binary_tree_rotate_left.c	binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
104-binary_tree_rotate_right.c	binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
110-binary_tree_is_bst.c	int binary_tree_is_bst(const binary_tree_t *tree);
111-bst_insert.c	bst_t *bst_insert(bst_t **tree, int value);
112-array_to_bst.c	bst_t *array_to_bst(int *array, size_t size);
113-bst_search.c	bst_t *bst_search(const bst_t *tree, int value);
114-bst_remove.c	bst_t *bst_remove(bst_t *root, int value);
120-binary_tree_is_avl.c	int binary_tree_is_avl(const binary_tree_t *tree);
121-avl_insert.c	avl_t *avl_insert(avl_t **tree, int value);
122-array_to_avl.c	avl_t *array_to_avl(int *array, size_t size);



