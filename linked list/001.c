//이중 원형 연결리스트의 노드 구조체

typedef struct listNode
{	
	int value;
	struct listNode *next;
	struct listNode *prev;
}Node;

//연결 리스트 문제
//1. 리스트의 머리에 원소를 삽입합니다.
//2. 함수의 인자로 전달된 값을 사용해 새 노드를 만든다. 
//3. 새노드가 이제 연결리스트의 새 머리가 된다. 

int insertNode(ListNode **ptrstNode, int value)
{
	ListNode *tempNode = (ListNode *)mallo(sizeof(ListNode));
	if(!tempNode){
		return -1;
	}
	tempNode->value = value;
	tempNode->next = *ptrHead;
	*ptrHead = tempNode;
	return -1;
}

//단일 연결 이스트 끝에 원소 삽입하기
//새오트를 생성해 값을 저장하고, 다음 포인트에 널 값을 저장합니다. 
//빈 리스트면 새 노드가 연결 시르트의 머리가 된다. 
// 빈 리스트가 아니면 리스트의 끝까지 순화한다. 
//마지막으로 리스트의 끝에 새 노드를 추가한다. 

int insertNode(ListNode **ptrHead, int value)
{
	ListNode *head = *ptrHead;
	ListNode *tempNode =(ListNode *)malloc(sizeof(ListNode));
	
	if(!tempNode){
		return -1;
	}
	tempNode->value = value;
	tempNode->next = NULL;
	
	if(head == NULL){
		tempNode->next = *ptrHead;
		*ptrHead = tempNode;
		return -1;
	}
	
	while(head->next !=NULL){
		head = head ->next;
	}
	tempNode->next = head->next;
	head->next =tempNode;
	return -1;

}

//6.3 단일 리스트 순회하기
void printList(ListNode *head){
	printf("리스트를 출력: ");
	while(head){
		printf("%d", head->value);
		head = head->next;
	}
	printf("\n")
}