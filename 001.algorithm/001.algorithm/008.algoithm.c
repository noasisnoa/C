#include <stdio.h>
//예제1-9


int fun9(int n){
	
	int i, j, m = 0;
	
	for(i = 0; i>0; i /=2){  //i = i/2
		for(j = 0; j< i ; j++){
		m += 1;
		}
	}
	return m;
}

int main(void){
	
	int c;
	c = fun9(5);
	printf("fun9 : %d\n", c);

	return 0;
}