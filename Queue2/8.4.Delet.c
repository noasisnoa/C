#include <stdlib.h>
#include <stdio.h>

#define ERROR_VALUE -1

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

int QueueRemove(QueueNode **ptrTail){
	QueueNode *tail = *ptrTail;
	QueueNode *deleteMe;
	int value;
	
	if(!tail){
		return ERROR_VALUE;
	}
	
	if(tail->next == tail){
		value = tail->value;
		free(tail);
		*ptrTail = NULL;
		return value;
	}
	
	deleteMe = tail->next;
	value = deleteMe->value;
	tail->next = deleteMe->next;
	free(deleteMe);
	return value;
}


int main(){
	QueueNode *tail = NULL;
	QueueAdd(&tail, 1);
	QueueAdd(&tail, 2);
	QueueAdd(&tail, 3);
	
	for(int i; i<3;i++){
		printf("%d", QueueRemove(&tail));
	}
	return 0;
}