/*
Leia uma matriz 8x 8 e escreva o maior elemento da diagonal principal e a soma dos elementos da diagonal secundaria.
*/

#include <stdio.h>

int main(){
	int matriz[8][8];
	int i, j, soma = 0;
	
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			printf("valor %d%d >> ", i, j);
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
	int maior = matriz[0][0];
	
	for(i = 0; i < 8; i++){
		if(maior < matriz [i][i]){
			maior = matriz[i][i];
		}
	}
	
	for(i = 0; i < 8; i++){
		soma += matriz[i][7 - i];
	}
	
	printf("%d\n", maior);
	printf("%d\n", soma);
}
