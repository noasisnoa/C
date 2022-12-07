#include <stdlib.h>
#include <stdio.h>

typedef struct queueNode_t{
	int value;
	struct queueNode_t *next;
}QueueNode;


int QueueAdd(QueueNode **ptrTail, int value){
	QueueNode *temp = (QueueNode*)malloc(sizeof(QueueNode));
	
	if(!temp){
		printf("Memory Allocation Error");
		return 0;
	}
	
	QueueNode *tail = *ptrTail;
	
	if(!tail){
		temp->value = value;
		temp->next = temp;
		*ptrTail;
	}
	else{
		temp->value = value;
		temp->next = temp;
		*ptrTail = temp;
	}
	return -1;
}