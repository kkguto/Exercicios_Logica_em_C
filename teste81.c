/*
Escreva um algoritmo que solicite ao usu�rio a entrada de 5 n�meros, e que exiba o somat�rio desses n�meros na tela. 
Ap�s exibir a soma, o programa deve mostrar tamb�m os n�meros que o usu�rio digitou, um por linha.  
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
