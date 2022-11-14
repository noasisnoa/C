#include <stdio.h>
//예제1-11


int fun11(int n){
	
	int i, j, k, m = 0;
	
	for(i = 0; i<n; i++){
		for(j = i; j<n; j++){
			for(k = j+1; k<n; k++){
			m += 1;
			}
		}
	}
	return m;
}

int main(void){
	
	int c;
	c = fun11(5);
	printf("fun11 : %d\n", c);

	return 0;
}