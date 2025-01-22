// Faça um programa que leia três valores (A, B, C) e mostre-os na ordem lida.  Em seguida, mostre-os em ordem crescente e decrescente.

#include <stdio.h>

int main(){
	
	int i, j, vetor[3] = {9, 4, 6};
	
	for(i = 0; i < sizeof(vetor)/sizeof(vetor[0]); i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	
	//ordem crescente
	for(i = 0; i < sizeof(vetor)/sizeof(vetor[0] - 1); i++){
		for(j = 0; j < sizeof(vetor)/sizeof(vetor[0]) - 1 - i; j++){
			if(vetor[j] > vetor[j+1]){
				int x = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = x;
			}
		}
	}
	
	for(i = 0; i < sizeof(vetor)/sizeof(vetor[0] - 1); i++){
		printf("%d ", vetor[i]);
	}
		
	printf("\n");
	
	// ordem decrescente	
	for(i = 0; i < sizeof(vetor)/sizeof(vetor[0]); i++){
		for(j = 0; j < sizeof(vetor)/sizeof(vetor[0]) - 1; j++){
			if(vetor[j] < vetor[j+1]){
				int x = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = x;
			}
		}
	}	
	
	for(i = 0; i < sizeof(vetor)/sizeof(vetor[0] - 1); i++){
		printf("%d ", vetor[i]);
	}
}
