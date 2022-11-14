#include <stdio.h>

int fun2(int n){
	
	int i, j, m = 0;
	for(i = 0; i< n ; i++){
		for(int j=0; j<n; j++ ){
			m += 1;
		}
	}
	return m ; 
}

int main(void){
	
	int c;
	c = fun2(5);
	printf("fun : %d\n", c);
	
	return 0;
}
