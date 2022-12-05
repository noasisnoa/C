#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR_VALUE -1
#define MAX_CAPACITY 

typedef struct Queue_t{
	int front;
	int back;
	int size;
	int data[MAX_CAPACITY];
}Queue;

void QueueInitialize(Queue *que){
	que->back = 0;
	que->front = 0 ;
	que->size = 0;
}

void QueueAdd(Queue *que, int value){
	if(que->size >= MAX_CAPACITY){
	printf("\n큐가 꽉 찼습니다.");
	return  ERROR_VALUE;
	}
	else{
		que->size++;
		que->data[que->back] = value;
		que->back = (que->back +1) % (MAX_CAPACITY -1);
	}
}

int QueueRemove(Queue *que){
	int value;
	if(que->size <=0){
		printf("\n큐가 비었습니다.");
		return ERROR_VALUE;
	}
	else{
		que->size--;
		value = que->data[que->front];
		que->front = (que->front + 1) % (MAX_CAPACITY - 1);
	}
	return value;
}

int QueueFront(Queue *que){
	return que->data[que->front];
}

int QueueBack(Queue *que){
	return que->data[que->back -1];
}

void QueueRemoveBack(Queue *que, int value){
	if(que->size >= MAX_CAPACITY){
	printf("\n큐가 비었습니다.");
	return ERROR_VALUE;
	}
	else{
		que->size--;
		que->data[que->back - 1];
		que->back = (que->back - 1) % (MAX_CAPACITY - 1);
	}
	return value;
}

int QueueIsEmpty(Queue *que){
	return que->size ==0;
}


int QueueSize(Queue *que){
	return que->size;
}