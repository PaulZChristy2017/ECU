#include "boolean.h"



#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct treenode{
  int data;
  struct treenode *left, *right;
}*bitree;



void initTree (bitree *bt); 
boolean isFull (void);
boolean isEmpty (bitree bt);
void addTree(bitree *bt, int data);


#endif
