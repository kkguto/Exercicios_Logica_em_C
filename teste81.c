/*
Escreva um algoritmo que solicite ao usuário a entrada de 5 números, e que exiba o somatório desses números na tela. 
Após exibir a soma, o programa deve mostrar também os números que o usuário digitou, um por linha.  
*/

#include <stdio.h>

int main(){
	
	int vetor[5];
	int i;
	int soma = 0;
	
	for(i = 0; i < 5; i++){
		printf("Digite o valor %d >> ", i+1);
		scanf("%d", &vetor[i]);
		soma+=vetor[i];
	}
	
	printf("%d\n", soma);
	
	for(i = 0; i<5; i++){
		printf("%d\n", vetor[i]);
	}
	
}
