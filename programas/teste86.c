/*
Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida
*/

#include <stdio.h>

#define LINHA (5)
#define COLUNA (5)

int main(){
	int matriz[LINHA][COLUNA];
	int i, j;	
	
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			matriz[i][j] = 0;
		}
	}
	
	for(i = 0; i < LINHA; i++){
		matriz[i][i] = 1;
	}
	
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}
}
