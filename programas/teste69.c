/*
Leia um vetor de 12 posi��es e em seguida ler tamb�m dois valores X e Y quaisquer correspondentes a duas posi��es no vetor. 
Ao final seu programa dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y.
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
