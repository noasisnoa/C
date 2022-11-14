#include <stdio.h>
//예제1-4

int fun4(int n){
	
	int i, m = 0;
	i = 1;
	while(i<n){
		m += 1;
		i = i*2;  //무엇을 의미하는 가
	}
	return m;
}


int main(void){
	
	int c;
	c = fun4(5);
	printf("fun4 : %d\n", c);
	
	return 0;
}