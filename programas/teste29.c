#include <stdio.h>

int main(){
	float s = 0.0;
	int  i, n = 5;
	
	for(i = 1; i <= n; i++){
		s += (1.0/i); //s = 1/1 + 1/2 + 1/3 + ... + 1/n
	}
	
	printf("%f", s);
}
