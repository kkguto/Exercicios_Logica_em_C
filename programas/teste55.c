/*
Faça um procedimento que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em ordem crescente.
*/

#include <stdio.h>

int ordenar(int [], int);

int main(){
	int vetor[3], i;
	
	for(i = 0; i < 3; i++){
		printf("Digite o valor %d > ", i+1);
		scanf("%d", &vetor[i]);
	}
	ordenar(vetor, 3);
	for(i = 0; i < 3; i++){
		printf("%d ", vetor[i]);
	}
	
	return 0;
}

int ordenar(int vetor[], int tam){
	int i, j;
	
	for(i = 0; i < tam - 1; i++){
		for(j = 0; j < tam - i - 1; j++){
			if(vetor[j] > vetor[j+1]){
				int test = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = test;
			}
		}
	}
}
