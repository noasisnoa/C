#include <stdio.h>
#define MAX_CAPACITY  6 
#define ERROR_VALUE  -1

typedef struct Stack{
	int top;
	int data[MAX_CAPACITY];
}Stack;

void StackInitialize(Stack *stk){
	stk->top =-1;
}
/*StackIsEmpty() 함수는 스택이 비어있으면 1을 반환하고, 나머지 경우에는 0을 반환한다.*/
int StackIsEmpty(Stack *stk){
	return (stk->top == -1);
}

/*StackSize()함수는 스택 내 원소의 개수를 반환한다.*/
int StackSize(Stack *stk){
	return(stk->top +1);
}

/*print() 함수는 배열의 원소를 출력한다.*/
void StackPrint(Stack *stk){
	printf("Stack :: ");
	for (int i = stk->top; i>=0; i--){
		printf("%d", stk->data[i]);
	}
	printf("\n");
}

/*StackPush() 함수는 데이터에 값을 덧붙인다.*/
void StackPush(Stack *stk, int value){
	if(stk->top < MAX_CAPACITY -1){
		stk->top++;
		stk->data[stk->top] = value;
	}
	else{
		printf("Stack overflow\n");
	}
}

/*Stack Pop()함수는 먼저 스텍이 비어있는지 아닌지를 확인한 다음
데이터의 배열에서 값을 꺼내 반환한다.*/
int StackPop(Stack *stk){
	if(stk->top>=0){
		int value = stk->data[stk->top];
		stk->top--;
		return value;
	}
	printf("stack empty\n");
	return ERROR_VALUE;
}

/*StackTop() 함수는 스텍의 꼭대기 원소에 거장된 값을 반환한다. (값을 삭제하지 않는다.)*/
int SacktTop(Stack *stk){
	int value = stk->data[stk->top];
	return value;
}
/*테스트 코드*/
int main()
{
	Stack stk;
	StackInitialize(&stk);
	StackPush(&stk,1);
	StackPush(&stk,2);
	StackPush(&stk,3);
	StackPush(&stk,4);
	StackPush(&stk,5);
	StackPrint(&stk);
	return 0;
}