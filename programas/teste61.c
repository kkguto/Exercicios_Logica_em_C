/*
Faça um procedimento que lê 50 valores inteiros e retorna o maior e o menor deles.
*/

#include <stdio.h>
#include <locale.h>

void maior_menor_valor(){
	int i, valores[50];
	
	for(i = 0; i < 50; i++){
		printf("Valor %d >> ", i+1);
		scanf("%d", &valores[i]);
	}

	int maior = valores[0];
	int menor = valores[0];
	
	for(i = 0; i < 50; i++){
		if(valores[i] > maior){
			maior = valores[i];
		}
		if(valores[i] < menor){
			menor = valores[i];
		}
	}
	
	printf("Maior Valor >> %d\nMenor Valor >> %d", maior, menor);
}

int main(){
	
	maior_menor_valor();
	
	return 0;
}
