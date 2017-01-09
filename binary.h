#include <stdlib.h>
#include "boolean.h"
#ifndef  binary_h
#define binary_h

typedef struct treenode {

	int data;

	struct treenode *left, *right;

} * binary_tree;

void init_tree(binary_tree *);

boolean is_full(void);

boolean is_empty(binary_tree);

void add_tree(binary_tree *, int);

void delete_branch(binary_tree *, int);

void LNR(binary_tree);

void RNL(binary_tree);

#endif
