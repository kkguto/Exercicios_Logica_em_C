/*
Leia dois vetores de 20 posições e calcule um terceiro vetor contendo, 
nas posições pares os valores do primeiro e nas posições impares os valores do segundo.
*/

#include <stdio.h>

int main(){
	
	int vetor1[20] = {3, 52, 34, 2, 40, 47, 50, 43, 0, 43, 13, 35, 6, 11, 26, 62, 61, 47, 38, 67}, vetor2[20] = {35, 21, 80, 17, 30, 21, 27, 16, 39, 44, 70, 86, 23, 47, 74, 57, 16, 94, 41, 41}, vetor3[40];
	int i;
	for(i = 0; i < 20; i++){
		vetor3[2*i] = vetor1[i];
		vetor3[2*i + 1] = vetor2[i];
	}
	
	for(i = 0; i < 40; i++){
		printf("%d ", vetor3[i]);
	}
}
