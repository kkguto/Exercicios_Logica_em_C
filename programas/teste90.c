/*
Leia uma matriz 5 x 5 e faça uma troca entre as diagonais superior e inferior. Escreva-a ao final.
*/

#include <stdio.h>

int main(){
	
	int matriz[5][5];
	int i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("Valor %d%d >> ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0; i < 4; i++){
		for(j = i+1; j < 5; j++){
			int temp = matriz[i][j];
			matriz[i][j] = matriz[j][i];
			matriz[j][i] = temp;
		}
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
