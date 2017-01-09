#include <stdio.h>
#include <time.h>
#include <ulimit.h>
#include "boolean.h"
#include "random.h"
//#include "bubble.h"
//#include "bubble_flag.h"
//#include "selection.h"
//#include "binary_tree.h"
//#include "quick.h"
//#include "insertion_array.h"
#include "insertion_linked.h"
//#include "shell.h"
//#include "heap.h"
//#include "merge_sort.h"
//#include "radix.h"
//#include "ordered_hash.h"
//#include "nonordered_hash.h"
//#include "tarver_insertion_linked.h"

// Driver program for sorter assignment

// For each quantity of numbers we want to test with (ie size), we will generate an array of ascending, descending, and random numbers and run each sorter on that array.

int main(void) {

    int array[200000], temp_array[200000],i, size, order, sorter;
    clock_t start, stop;
    time_t t;
    float time_elapsed;
    int seed;

    ulimit(UL_SETFSIZE,"unlimited");

    for (size = 5000; size <= 125000; size = size * 5) {
        for (order = 1; order <= 3; order++) {
             switch (order) {
                 case 1: // generate array of "size" ascending numbers
		  
                           for (i = 0; i < size; i++) {
                            array[i] = i+1;
                         }
                         break;
			
                 case 2: // generate array of "size" descending numbers
                         for (i = 0; i < size; i++) {
                            array[i] = size-i;
                         }

                         break;
                 case 3: // generate array of "size" random numbers
                         //time(&t);
                         t = clock();
                         seed = t;
                         for (i = 0; i < size; i++) {
                            seed=random(seed); 
                            array[i] = seed;
                         }
			
                         break;
             }
            for (sorter = 1; sorter <= 14; sorter++) {
                // copy contents of array to a temporary array to prevent sending sorted array to subsequent sorters.
                for (i = 0; i < size; i++)
                    temp_array[i] = array[i]; 
                switch (sorter) {

/*                    case 1: // bubble sort
                            start = clock();
                            bubble(temp_array, size);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("bubble sort, order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;

                    case 2: // bubble sort w/flag
                            start = clock();
                            bubble_flag(temp_array, size);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("bubble sort w/flag, order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;

                    case 3: // selection sort 
                            start = clock();
                            selection(temp_array, size);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("selection sort, order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;

                    case 4: // binary tree sort
                            if (size < 500000) {
                               start = clock();
                               bt(temp_array, size);
                               stop = clock();
                               time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                               printf("binary tree sort, order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            }
                            else {
                               printf("Not running binary tree on 500,000\n");
                            }
                            break;

                    case 5: // quick sort
                            start = clock();
                            quick(temp_array, 0, size-1);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("quick sort, order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;
/*
                    case 6: // insertion sort (using array)
                            start = clock();
                            insertion_array(temp_array, size);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("insertion sort (array), order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;
*/
                    case 7: // insertion sort (using linked list)
                            start = clock();
                            insertion_linked(temp_array, size);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("insertion sort (linked list), order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;
/*
                    case 8: // shell sort 
                            start = clock();
                            shell(temp_array, size);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("shell sort, order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;

                    case 9: // heap sort
                            start = clock();
                            heapsort(temp_array, size);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("heap sort, order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;

                    case 10: // merge sort 
                            start = clock();
                            // Changed to exclude additional array in front of parameter list as requested, but will not send "array" to any subprogram... only temp_array is allowed to be manipulated by your sorters.
                            merge_sort(temp_array, 0, size-1);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("merge sort, order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;

                    case 11: // radix sort 
                            start = clock();
                            radix_sort(temp_array, size);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("radix sort, order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;
/*
                    case 12: // Tarver's Insertion Sort with Linked List as requested
                            start = clock();
                            tarver_insertion_linked(temp_array, size);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("Tarver's Insertion Sort - Linked List sort, order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;


                    case 13: // ordered hash sort 
                            start = clock();
                            ordered_hash(temp_array, size);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("ordered hash sort, order: %d, size: %d, time: %f\n", order, size, time_elapsed); 
                            break;

                    case 14: // non-ordered hash sort
                            start = clock();
                            nonordered_hash(temp_array, size);
                            stop = clock();
                            time_elapsed = (float) (stop - start)/ CLOCKS_PER_SEC;
                            printf("non-ordered hash sort, order: %d, size: %d, time: %f\n", order, size, time_elapsed);
                            break;


                    default: printf("sorter %d not written yet\n", sorter);
*/                }
            }
      }
   }
}


