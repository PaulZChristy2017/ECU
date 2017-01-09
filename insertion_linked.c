#include <stdio.h>
#include "insertion_linked.h"
#include <stdlib.h>

void insertion_linked(int *unsortedArray, int size)
{
   //intialize Variables
   int index; //Index for the for loop to go through each element in the array
   list newList; //Pointer to the front of the linked list

   //intialize linkedlist to be used
   newList = (list)malloc(sizeof(struct endpointer));
	newList -> front = NULL;

   //Create a new nodePointer for the first element in the array and then set the linked list pointer to the new Node
   nodePointer newNode;
	newNode = (nodePointer)malloc(sizeof(struct listNode));
	newNode -> data = unsortedArray[0];
	newNode -> next = NULL;
   newList -> front = newNode;

   //For loop that goes through each element in the array, skipping the first element, as it is already in the linked list
   for(index = 1; index < size; index++)
   {
      //Create a new nodePointer for each element
      nodePointer newNode;
	   newNode = (nodePointer)malloc(sizeof(struct listNode));
	   newNode -> data = unsortedArray[index];
      
      //If the new node's data is less then or equal to the linked list's front node's data then the new data can be added to the front of the linked list
      if(unsortedArray[index] < newList -> front -> data)
      {  
         //Sets the linked list's front node to the new node's next node and then sets the link list's front node to the new node
         newNode-> next = newList -> front;
         newList -> front = newNode;
      }//End if
      else
      {
         //Creates a temporary nodePointer to follow the linked list till it finds the appropriate a spot
         nodePointer temp;
		   temp = newList -> front;

         //While the next node in the linked list isn't NULL and the new nodes data is greater then the current node's data it sets the current node to the next node in the linked list
		   while((temp -> next != NULL) && ((newNode -> data) >= (temp -> next -> data)))
			   temp = temp -> next;

         //If the current node does not point to NULL then it adds the new node
         if(temp -> next != NULL)
         {   
            //Sets the new node's next to the current nodes next and then sets the current nodes next to the new node
            newNode -> next = temp -> next;
		      temp -> next = newNode;
         }//End if

         //If the current node does point to NULL then it adds the new node
         else if(((newNode -> data) >= (temp -> data)) && (temp -> next == NULL))
         {
            //Sets the new node's next to NULL and then sets the current nodes next to the new node 
            newNode -> next = NULL;
            temp -> next = newNode;
         }//End if
      }//End else
   }//End for loop

   nodePointer temp;
   temp = newList -> front;
   index = 0;
   
   while(temp != NULL)
   {
      unsortedArray[index] = temp -> data;
      temp = temp -> next;
      index++;
   }
}//End Method

