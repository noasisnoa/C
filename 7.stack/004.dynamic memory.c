#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book{
	int number;
	char title[50];
};


int main(void){
	
	struct Book *p;
	int s;
	printf("숫자를 입려하세요 : ");
	scanf("%d", &s);
	
	p = (struct Book*)malloc(s*sizeof(int));
	
	if(p == NULL){
		printf("동적 메모리 할당  오류 \n");
		exit(1);
	}
	
	p[0].number = 1;
	strcpy(p[0].title, "C Programming\n");
	
	p[1].number = 2;
	strcpy(p[1].title, "C Programming\n");
	printf("============================\n");
	
	return 0;	
}