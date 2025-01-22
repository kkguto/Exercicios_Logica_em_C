/*
 Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.
*/

#include <stdio.h>

#define LINHA (10)
#define COLUNA (10)

int main(){
	int matriz[LINHA][COLUNA];
	int i, j;
	
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("Digite o valor %d%d >> ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	int maior = matriz[0][0];
	
	int li;
	int co;
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			if(maior < matriz[i][j]){
				maior = matriz[i][j];
				li = i;
				co = j;
			}
		}
	}
	
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("%d  ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Maior Valor = %d - Localização >> %d %d", maior, li, co);
}
