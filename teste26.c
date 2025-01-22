#include <stdio.h>

int main(){
	
	int v[5] = {4, 9, 10, 8, 6}, i;
	
	for(i = 0; i < 5; i++){
		printf("%d ", v[i]); // i[0] -> i[1] -> i[2] -> i[3] -> i[4]
	}
	printf("\n");
	for (i = 4; i >= 0; i--){
		printf("%d ", v[i]); // i[4] -> i[3] -> i[2] -> i[1] -> i[0]	
	}
}
