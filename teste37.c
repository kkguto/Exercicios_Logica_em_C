/*
Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos. 
Seu programa deve usar laços de repetição e funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.

Por exemplo, para lado igual a 5:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main(){
	int i, lado, j;
	
	printf("Digite o tamanho do lado do quadrado:\n");
	scanf("%d", &lado);
	if (lado > 20){
		printf("O limite de  tamanho é 20\n\n");
		lado = 20;
	}
	
	printf("Quadrado com %d de tamanho:\n", lado);
	for(i = 0; i < lado;i++){
		for(j = 0; j < lado; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
