/*
Leia um vetor de 40 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.
*/

#include <stdio.h>

int main(){
	int vetor[40] = {-8, -20, -16,   7,   8, -18,   8,  -2, -10,  16,  -4,  16,  13, -12,  -9, -10,  12,  14,  -8,  -2,   9,   3,  15, -10,   9,   7, 1,  -2,   0,  14,  11,  11,  16,  17,  12, -14,  -6,   2,  -5,-13};
	int i;
	for(i = 0; i<40; i++){
		if(vetor[i] < 0){
			printf("0 ");
		} else {
			printf("%d ", vetor[i]);
		}
	}	
}
