/*
Faça um programa que receba a idade de 15 pessoas e que calcule e mostre:
a) A quantidade de pessoas em cada faixa etária;
b) A percentagem de pessoas na primeira e na última faixa etária, com relação ao total de pessoas: 

Até 15 anos
De 16 a 30 anos
De 31 a 45 anos
De 46 a 60 anos
Acima de 61 anos
*/

#include <stdio.h>

int main(){
	int i, idade15 = 0, idade16_30 = 0, idade31_45 = 0, idade46_60 = 0, idade61 = 0, idade;
	for(i = 0; i < 15; i++){
		printf("Digite a idade da Pessoa %d\n", i+1);
		scanf("%d", &idade);
		
		if (idade <=15){
			idade15++;
		} else if(idade >= 16 && idade <= 30){
			idade16_30++;
		} else if(idade >= 31 && idade <= 45){
			idade31_45++;
		} else if(idade >= 46 && idade <= 60){
			idade46_60++;
		} else{
			idade61++;
		}
	}
	 
	printf("\n");
	printf("Idade ate 15 anos >> %d pessoas\n", idade15);
	printf("Idade entre 16 a 30 anos >> %d pessoas\n", idade16_30);
	printf("Idade entre 31 a 45 anos >> %d pessoas\n", idade31_45);
	printf("Idade entre 46 a 60 anos >> %d pessoas\n", idade46_60);
	printf("Idade mais que 60 anos >> %d pessoas\n", idade61);
	printf("\n");
	printf("Porcentagem de pessoas com 15 anos >> %.1f%%\nPorcentagem de pessoas com mais de 61 anos >> %.1f%%", (idade15/15.0) * 100, (idade61/15.0) * 100);
}
