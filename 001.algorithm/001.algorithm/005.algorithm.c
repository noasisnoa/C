#include <stdio.h>
//예제1-6

int fun6(int n){
	
	int i, j, k, m = 0;
	for(i = 0; i<n; i++){
		for(j = 0; j<n ; j++){
			for(k = 0; k<n ; k++){
				m += 1;
			}
		}
	}
	return m;
}


int main(void){
	
	int c;
	c = fun6(5);
	printf("fun6 : %d\n", c);

	return 0;
}