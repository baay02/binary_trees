Skip to content
NwabuezeFranklin
/
binary_trees
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
binary_trees/8-binary_tree_postorder.c
@NwabuezeFranklin
NwabuezeFranklin post-order Trasversal
 1 contributor
16 lines (15 sloc)  439 Bytes
#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
