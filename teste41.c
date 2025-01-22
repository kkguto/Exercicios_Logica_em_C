/*
 Faça um programa que receba a idade, altura e o peso de 25 pessoas, Calcule e mostre:

A quantidade de pessoas com idade superior a 50 anos;
A média das Alturas das pessoas com idade entre 10 e 20 anos
A porcentagem das pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas. 
*/

#include <stdio.h>

int main(){
	int i, idades[25], superior_50anos = 0, entre10_20anos = 0, inferior_40quilos = 0;
	float porcen, alturas[25], pesos[25], media, soma = 0.0;
	
	for(i = 0; i < 25; i++){
		printf("Idade da Pessoa %d:\n", i+1);
		scanf("%d", &idades[i]);
		
		printf("Altura da Pessoa %d:\n", i+1);
		scanf("%f", &alturas[i]);
		
		printf("Peso da Pessoa %d:\n", i+1);
		scanf("%f", &pesos[i]);
		
		if(idades[i] > 50){
			superior_50anos++;
		}
		
		if(idades[i] >= 10 && idades[i] <= 20){
			entre10_20anos++;
			soma+=alturas[i];
		}
	}
	
	if(entre10_20anos > 0){
		media = soma/(float)entre10_20anos;	
	}else{
		media = 0.0;
	}
	
	for(i = 0; i<25; i++){
		if(pesos[i] < 40){
			inferior_40quilos++;
		}
	}
	
	porcen = (inferior_40quilos/25.0) * 100;
	
	printf("\nQuantidade de pessoas com idade superior a 50 anos: %d\n", superior_50anos);
    printf("Média das alturas das pessoas com idade entre 10 e 20 anos: %.2f metros\n", media);
    printf("Porcentagem de pessoas com peso inferior a 40 kg: %.2f%%\n", porcen);
}
