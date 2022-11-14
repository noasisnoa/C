#include <stdio.h>
//예제1-13


int fun13(int n){
	
	int i, j, k, m = 0;
	
	for(i = 1; i<=n; i *=2){
		for(j = 0; j<=i; j++){
			for(k = j+1; k<n; k++){
			m += 1;
			}
		}
	}
	return m;
}

int main(void){
	
	int c;
	c = fun13(5);
	printf("fun13 : %d\n", c);

	return 0;
}