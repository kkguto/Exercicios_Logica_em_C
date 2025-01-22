/*
Declare um vetor de 10 posições e o preencha com os 10 primeiros números impares e o escreva.
*/

#include <stdio.h>

void num_impar(int v[], int tam){
	int i;
	for(i = 0; i<tam; i++){
		v[i] = 2*i + 1;
	}
}

int main(){
	int i;
	int tamanho = 10;
	int vetor[tamanho];
	
	num_impar(vetor, tamanho);
	
	for(i = 0; i<tamanho; i++){
		printf("%d ", vetor[i]);
	}
	
	return 0;
}
