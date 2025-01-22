#include <stdio.h>

int i, j; // variaveis globais

void tabuada(int);

int main() {
	int n;
	
	printf("Digite ate qual numero deseja ver a Tabuada:\n");
	scanf("%d", &n);
	printf("\n");
	

	
	tabuada(n);	
}

void tabuada(int n){
	
//	for (i = 1; i <= 10; i++){
//		printf("%d ",n*i);
//	}
	
	for (i = 1; i <= n; i++){
		printf("Tabuada do %d: ", i);
		for (j = 1; j <= 10; j++){
			printf("%d ", i*j);
		}
		printf("\n\n");
	}
}
