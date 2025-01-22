/*
Leia um vetor de 12 posições e em seguida ler também dois valores X e Y quaisquer correspondentes a duas posições no vetor. 
Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vetor[12] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 12};
	
	int x = vetor[5];
	int y = vetor[10];
	
	int soma = x + y;
	
	printf("%d", soma);
	
	
}
