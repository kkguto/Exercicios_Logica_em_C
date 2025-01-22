/*
Faça um programa que receba a idade e o peso de sete pessoas. Calcule e mostre:

A quantidade de pessoas com mais de 90 quilos;
A média das idades das sete pessoas;  
*/

#include <stdio.h>

int main(){
	
	int i, idade[7], peso[7], soma = 0, media, mais_90quilos = 0;
	
	printf("Digite abaixo as Idades das 7 pessoas:\n\n");
	
	for(i = 0; i < 7; i++){
		printf("Pessoa %d\n", i+1);
		scanf("%d", &idade[i]);
		soma += idade[i];
	}
	media = soma/7;
	
	printf("\nAgora digite o peso (em kg) de cada um:\n\n");
	
	for(i = 0; i<7; i++){
		printf("Pessoa %d\n", i+1);
		scanf("%d", &peso[i]);
	}
	
	for (i = 0; i < 7; i++){
		if(peso[i] > 90){
			mais_90quilos++;
		}
	}
	
	printf("\nMedia das Idades >> %d\n", media);
	printf("\nPessoas com mais de 90 quilos >> %d\n", mais_90quilos);
}

