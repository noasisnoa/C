#include <stdio.h>

int fun1(int n){
	
	int m = 0;
	for(int i = 0; i<n ; i++){
		m += 1;
	}
	return m ; 
}

int main(void){
	
	int c;
	c = fun1(5);
	printf("c : %d", c);
	return 0;
}