#include<stdlib.h>
#include<stdio.h>
#include"merge_sort.h"


/* Function to merge the two haves arr[left..middle] and arr[middle + 1..right] of array arr[] */
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;
 
    /* Create temp arrays */
    int Left[n1], Right[n2];
 
    /* Copy data to temp arrays Left[] and Right[] */
    for(i = 0; i < n1; i++)
        Left[i] = arr[left + i];

    for(j = 0; j <= n2; j++)
        Right[j] = arr[middle + 1+ j];
 
    /* Merge the temp arrays back into arr[left..right]*/
    i = 0;
    j = 0;
    k = left;
    while ((i < n1) && (j < n2)) {

        if (Left[i] <= Right[j]) {
            arr[k] = Left[i];
            i++;
        }
        else {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of Left[], if there are any */
    while (i < n1) {
        arr[k] = Left[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of Right[], if there are any */
    while (j < n2) {
        arr[k] = Right[j];
        j++;
        k++;
    }
}
 
/* left is for left index and right is right index of the sub-array of arr to be sorted */
void merge_sort(int arr[], int left, int right) {

	int arr_size = sizeof(arr)/sizeof(arr[0]);
    if (left < right) {

        int middle = left +(right - left)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        merge_sort(arr, left, middle);
        merge_sort(arr, middle + 1, right);
        merge(arr, left, middle, right);

    }
}
