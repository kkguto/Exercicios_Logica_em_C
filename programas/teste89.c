/*
Leia uma matriz 8 x 8 e a transforme numa matriz triangular inferior , atribuindo zero a todos os elementos acima da diagonal principal, escrevendo-a ao final.
*/

#include <stdio.h>

int main(){
	int matriz[8][8];
	int i, j;
	
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			printf("Valor %d%d >> ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0; i < 8; i++){
		for(j = i + 1; j < 8; j++){
			matriz[i][j] = 0;
		}
	}
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}	
}
	
	
