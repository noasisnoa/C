#include <stdio.h>
//예제1-7

int fun7(int n){
	
	int i, j, k, m = 0;
	
	for(i = 0; i<n; i++){
		for(j = 0; j<n ; j++){
		m += 1;
		}
	}
	
	for(i = 0; i<n; i++){
		for(k = 0; k<n ; k++){
		m += 1;
		}
	}
	return m;
}


int main(void){
	
	int c;
	c = fun7(5);
	printf("fun7 : %d\n", c);

	return 0;
}