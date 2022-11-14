#include <stdio.h>
//예제 1

int fun1(int n){
	
	int m = 0;
	for(int i = 0; i<n ; i++){
		m += 1;
	}
	return m ; 
}

int main(void){
	
	int fun;
	int c ; 
	printf("m의 값을 적어 주세요: ");
	scanf("%d", &c);
	
	fun = fun1(c);
	printf("fun : %d\n", fun);

	
	return 0;
}
