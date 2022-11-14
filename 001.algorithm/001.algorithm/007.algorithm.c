#include <stdio.h>
//예제1-8

int fun7(int n){
	
	int i, j, m = 0;
	
	for(i = 0; i<n; i++){
		for(j = 0; j< sqrt(n) ; j++){
		m += 1;
		}
	}
	return m;
}


