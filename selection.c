#include <stdio.h>

int selection(int temp_array[], int size){

int i, j;	//for loop index counters
int temp;

/*
The first for loop moves from i to n. 
	(n being the size of the array and i being the current position in the array)
The second for loop will move from j to n.
	(j starting at i+1 and working until the end of the array)
The if statement will compare element i and element j of the array.
	if element i is greater then element j, the two elements are swapped.
	if element i is less than or equal to element j, continue on.
*/

  for(i=0;i<size;i++){
      for(j=i+1;j<size;j++){
           if(temp_array[i]>temp_array[j]){	
			  //swap
              temp=temp_array[i];
              temp_array[i]=temp_array[j];
              temp_array[j]=temp;
           }
      }
  }

  return 0;
}
