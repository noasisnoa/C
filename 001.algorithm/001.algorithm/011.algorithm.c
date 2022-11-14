#include <stdio.h>
//예제1-12


int fun12(int n){
	
	int i, j, k, m = 0;
	
	for(i = 0; i<n; i++){
		for(j = i; j<n; j++){
			m += 1;
		}
	}
	return m;
}

int main(void){
	
	int c;
	c = fun12(5);
	printf("fun12 : %d\n", c);

	return 0;
}