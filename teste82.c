/*
Crie um programa que solicite a entrada de 10 números pelo usuário, armazenando-os em um vetor, e então monte outro vetor com os valores do primeiro multiplicados por 5. 
Exiba os valores dos dois vetores na tela, simultaneamente, em duas colunas (um em cada coluna), uma posição por linha. 
*/

#include <stdio.h>

int main(){
	int vetor1[10] = {1,2,3,4,5,6,7,8,9,10};
	int vetor2[10];
	int i;
	for(i = 0; i<10; i++){
		vetor2[i] = vetor1[i] * 5;
	}
	
	for(i = 0; i<10; i++){
		printf("%d \t %d\n", vetor1[i], vetor2[i]);
	}
}
