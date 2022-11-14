#include <stdio.h>
//예제1-10


int fun10(int n){
	
	int i, j, m = 0;
	
	for(i = 0; i<n; i++){  //i = i/2
		for(j = i; j>0; j--){
		m += 1;
		}
	}
	return m;
}

int main(void){
	
	int c;
	c = fun10(5);
	printf("fun10 : %d\n", c);

	return 0;
}