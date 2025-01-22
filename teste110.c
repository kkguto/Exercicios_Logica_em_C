/*
Crie um programa que calcule a soma dos elementos de um vetor de inteiros utilizando ponteiros.
*/

#include <stdio.h>

int main(){
	
	int vetor[5] = {1,2,3,4,5};
	
	int *ptr = vetor;

	
	int soma = 0, i;
	for(i = 0; i < 5; i++){
		soma += *(ptr + i);//acessa cada elemento do vetor
	}
	
	printf("%d", soma);
	
	return 0;
}
