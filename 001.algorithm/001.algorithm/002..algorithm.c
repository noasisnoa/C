#include <stdio.h>

int fun3(int n){
	
	int i, j, m = 0;
	for(i = 0; i< n ; i++){
		for(j=0; j<i; j++ ){
			m += 1;
		}
	}
	return m ; 
}


int main(void){
	
	int c;
	c = fun3(5);
	printf("fun3 : %d\n", c);
	
	return 0;
}