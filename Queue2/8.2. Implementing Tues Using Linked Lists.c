typedef struct queueNode_t{
	int value;
	struct queueNode_t *next;
}QueueNode;

void printList(QueueNode *tail){
	if(!tail){
		return;
	}
	
	QueueNode *head = tail->next;
	printf("\n%d", head->value);
	QueueNode *currNode = head->next;
	
	while(currNode != head){
		printf("%d", currNode->value);
		currNode = currNode->next;
	}
}