#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

//DEVAN CHANEY, BINARY TREE
//program bt


void bt (int temp_array[], int size){  

//add tree sub
int i;
bitree temp;
initTree (&temp);
// for loop for moving through array
if (!isFull()){
for (i = 0; i < size -1; i++){
 addTree(&temp, temp_array[i]);
}
}
}
  //if node is empty, allocating memory and adding data to tree.

void addTree(bitree *bt, int x){
int dataAdd = x;
  bitree temp;
    if (isEmpty(*bt)){
       (*bt)=((bitree)malloc(sizeof(struct treenode)));
       (*bt)->data = dataAdd;
       (*bt)->left = NULL;
       (*bt)->right = NULL;
       
    }
     //if node was not empty, checking for greater or less than and calling add tree.
     else{
       if (dataAdd < (*bt)->data){
        addTree(&(*bt)->left, dataAdd);
       }
      else{
        addTree(&(*bt)->right, dataAdd);
      }    
   }
} 


//initilize tree
void initTree (bitree *bt){
 (*bt) = NULL;
}
// Boolean for empty
boolean isEmpty (bitree bt) {
 return (bt == NULL);
}
// Boolean for full
boolean isFull (void){
  bitree temp;
  temp = (bitree) malloc(sizeof(struct treenode));
  if (temp == NULL){
   return TRUE;
  }
   else{
     free (temp);
     return FALSE;
   }
}
