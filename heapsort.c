#include<stdio.h>
#include<stdlib.h> 
#include"heap.h"


void heapsort(int element[],int limit){
   int i,t, counter;

    //Start with creating the heap 
    buildheap(element,limit);

/*==============================================================================
  element[0] is now the largest value in the array. Switch element[0]
  and element[i], which starts at the back of the array and works
  its way forward. This will put the largest value in the array at the back
  and whatever was in element[i] at the root. Send the array and index value
  to heap_adjust to shuffle the heap back to the root being the largest value.
  ==============================================================================*/
    for(i=limit-1;i>0;i--){
       t = element[0];
       element[0] = element[i];
       element[i] = t;
       heap_adjust(element,i);
    }
}
/*====================================================================================
  This subprogram will build the heap. It starts at element number 1 and works its way
  down through the array, checking to make sure that each parent value is greater than
  its children. If not, then it swaps the two.
====================================================================================*/ 
void buildheap(int element[],int limit){
    int i, val, s,parent;
    for (i=1; i<limit; i++){
        val = element[i];
        s=i;
        parent=(s-1)/2;
        while ((s > 0) && (element[parent] < val)){
            element[s] = element[parent];
            s = parent;
            parent = (s - 1)/ 2;
        }
        element[s] = val;
    }
}
 
/*===================================================================
  heap_adjust decides which elements need to be shuffled
  to maintain the proper heap. It takes in the array and the limit.
===================================================================*/
void heap_adjust(int element[],int limit){
   int i,j,item, counter; 
   j = 0;
   item = element[j];
   //This formula sets i to the index value of whatever is the left child of j in the "tree".
   i = 2*j+1;

   /*===============================================================================
     The limit isn't the actual size of the array, it is the portion of the
     array that hasn't been sorted yet. By doing limit-1 it won't shuffle
     around numbers that are already in the correct order. This allows the
     program to do all of the sorting in the actual array instead of a temp array.
   ===============================================================================*/
   while(i<=limit-1){
      if((i+1 <= limit-1) && (element[i]<element[i+1]))
            i++;
      if(item<element[i]){
         element[j] = element[i];
         j = i;
         i = 2*j+1;
      }
      else
         break;
   }
   element[j] = item;

}
