/*
 Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.
*/

#include <stdio.h>

#define SIZE (6)

int main(){

	int matriz[SIZE][SIZE], maior_10 = 0;
	int i, j;
	
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			printf("Digite o valor %d%d >> ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			if(matriz[i][j] > 10){
				maior_10++;
			}
		}
	}
	
	printf("\nTem %d valores maiores que 10\n", maior_10);
	
}
