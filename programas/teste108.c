/*
Crie um programa que defina um vetor de 5 inteiros e use um ponteiro para acessar e imprimir os elementos do vetor.
*/

#include <stdio.h>

int main(){
	int i;
	int v[5] = {2,3,4,1,7};
	int *ptr = v;
	int soma = 0;
	
	for(i = 0; i<5; i++){
		printf("%d ", *(ptr + i));
		soma += *(ptr + i);
	}
	
	printf("\n%d", soma);
	return 0;
}
