
#ifndef stack_h
#define stack_h
typedef struct listNode
{
	int data;
	struct listNode *next;
}*nodePointer;

typedef struct endpointer
{
	nodePointer front;
}*list;

void instertion_linked(int *, int);
#endif
