/*
Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-e-versa. Escreva ao final o vetor obtido.
*/

#include <stdio.h>

int main(){
	int vetor[16] = {1,4,6,7,8,5,3,2,10,15,14,12,11,13,16,18};
	int i, temp;
	
	for(i = 0; i <= 8; i++){
		temp = vetor[i];
		vetor[i] = vetor[i+8];
		vetor[i+8] = temp;
	}
	
	for(i = 0; i <= 16; i++){
		printf("%d ", vetor[i]);
	}
}
