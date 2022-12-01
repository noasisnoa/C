#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int *list;
	int student;
	printf("학생수를 입려하세요 : ");
	scanf("%d", &student);
	
	list = (int *)malloc(student*sizeof(int));
	if(list == NULL){
		
		printf("동적 메모리 할당");
		exit(1);
	}
	for(int i=0; i<student; i++){
		printf("학생 %d성적 :", i+1);
		scanf("%d\n", &list[i]);
	}
	
	printf("============================");
	for(int j =0; j<student; j++){
		printf("학생 %d 성적:%d", j+1, list[j]);
	}
	
	printf("============================");
	return 0;	
}