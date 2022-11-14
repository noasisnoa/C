#include <stdio.h>
//예제1-5

int fun5(int n){
	
	int i, m = 0;
	i = n;
	while(i>0){
		m += 1;
		i = i/2;
	}
	return m;
}


int main(void){
	
	int c;
	c = fun5(5);
	printf("fun5 : %d\n", c);
	
	return 0;
}