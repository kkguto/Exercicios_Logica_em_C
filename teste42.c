/*
Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos e espaços em branco. Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
Para lado igual a 5:
*****
*   *
*   *
*   *
*****
*/

#include <stdio.h>

int main(){
	
	int i, j, lado;
	
	printf("Digite o tamanho do lado do quadrado:\n");
	scanf("%d", &lado);
	
	if (lado > 20){
		printf("O limite de  tamanho é 20\n\n");
		lado = 20;
	}
	
	for(i = 0; i < lado; i++){ //i = linha
		for(j = 0; j < lado; j++){ //j = coluna
			if(i == 0||i == lado - 1|| j == 0 || j == lado - 1){ // lado - 1 = ultimo indice
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
