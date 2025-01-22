/*
Escreva um aplicativo que recebe inteiro e mostra os números pares e ímpares (separados), de 1 até esse inteiro.
*/

#include <stdio.h>

int main(){
	int i, n;
	
	printf("Digite um numero inteiro positivo:\n");
	scanf("%d", &n);
	printf("\n");

	printf("Numeros Pares\n");
	for (i = 0; i <= n; i++){
		if (i % 2 == 0){
			printf("%d ", i);
		}
	}
	printf("\n\n");
	printf("Numeros Impares\n");
	for (i = 0; i <= n; i++){
		if (i % 2 != 0){
			printf("%d ", i);
		}
	}
}
