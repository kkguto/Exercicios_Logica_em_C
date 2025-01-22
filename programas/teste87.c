/*
 Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, 
 ao final escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE (20)

int main(){
	
	int matriz[SIZE][SIZE], i, j;
	int valor, encontrado = 0, posX, posY;
	
	srand(time(NULL));
	
	for(i = 0; i < SIZE; i++){
		for(j=0; j < SIZE; j++){
			matriz[i][j] = rand() % 1000;
		}
	}
	
	printf("Digite um valor entre 0 e 999:\n");
	scanf("%d", &valor);
	
	for(i = 0; i < SIZE; i++){
		for(j=0; j < SIZE; j++){
			if(valor == matriz[i][j]){
				encontrado = 1;
				posX = i;
				posY = j;
				break;
			}
		}
		if (encontrado) {
            break; 
        }
	}
	
	for(i = 0; i < SIZE; i++){
		for(j=0; j < SIZE; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	if(encontrado){
		printf("%d foi encontrado no %d %d", valor, posX, posY);
	}else{
		printf("nao encontrado");
	}
	
	return 0;
}
