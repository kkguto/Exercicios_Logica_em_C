/*
Faça um programa que recebe a altura de um triangulo em um número inteiro e imprima-o utilizando asteriscos. Veja o Exemplo:

Entrada: 5

*
**
***
****
*****
*/
#include <stdio.h>

int main(){
	
	int i, lado, j;
	
	printf("Digite o tamanho da altura do Triangulo:\n");
	scanf("%d", &lado);
	
	printf("\nTriangulo de Altura %d:\n\n", lado);
	
	for(i = 0; i < lado; i++){
		for(j = i; j >= 0; j--){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
