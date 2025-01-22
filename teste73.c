/*
Leia um vetor de 40 posições. Contar e escrever quantos valores pares ele possui.
*/

#include <stdio.h>

int main(){
	int vetor[40] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
	int i, count = 0;
	for(i = 0; i<40; i++){
		if(vetor[i] % 2 == 0){
			count++;
		}
	}
	
	printf("%d", count);
}
