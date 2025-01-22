/*
Leia um vetor de 50 posições e o compacte, ou seja, elimine as posições com valor zero avançando uma posição, com os com os valores subseqüentes do vetor. 
Dessa forma todos “zeros” devem ficar para as posições finais do vetor.
*/

#include <stdio.h>

int main(){
	
	int vetor[50] = {12, 0, 45, 67, 0, 23, 89, 34, 0, 78, 56, 0, 24, 90, 12, 0, 49, 87, 0, 31, 73, 54, 0, 21, 65, 0, 38, 93, 0, 50, 81, 0, 27, 46, 0, 19, 72, 33, 0, 44, 92, 0, 16, 83, 0, 58, 27, 0, 66, 99};
	int i, j;
	
	for(i = 0; i < 50; i++){
		for(j = 0; j < 49; j++){
			if(vetor[j] == 0){
				int test = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = test;
			}
		}
	}
	
	for(i = 0; i < 50; i++){
		printf("%d ", vetor[i]);	
	}
	
}
