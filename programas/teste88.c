/*
Leia uma matriz 4 x 4 e troque os valores da 1ª.linha pelos da 4ª.coluna, vice-e-versa. Escrever ao final a matriz obtida
*/

#include <stdio.h>

int main(){
	
	int matriz[4][4];
	int i, j;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("valor %d%d >> ", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
		
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			int temp = matriz[0][j];
			matriz[0][j] = matriz[i][3];
			matriz[i][3] = temp;
		}
	}
	
	printf("\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
