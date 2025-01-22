/*
Faça um programa que receba a idade e o sexto de sete pessoas e que calcule e mostre:

A idade média do grupo;
A idade média das mulheres;
A idade média dos homens;  
*/

#include <stdio.h>
#include <ctype.h>

int main(){
	
	int i, idade[7];
	int mulher = 0, homem = 0, soma = 0, soma_mu = 0, soma_ho = 0;
	float media_grupo, media_homem, media_mulher;
	char sexo[7];
	
	for(i = 0; i < 7; i++){
		printf("Sexo da Pessoa %d (M para mulher e H para homem):\n", i+1);
		scanf(" %c", &sexo[i]);
		printf("Idade da Pessoa %d\n", i+1);
		scanf("%d", &idade[i]);
		soma+=idade[i];
	}
	media_grupo = soma/7.0;
	
	for(i = 0; i<7; i++){
		if(sexo[i] == 'm' || sexo[i] == 'M'){
			soma_mu += idade[i];
			mulher++;
		}
		if(sexo[i] == 'h' || sexo[i] == 'H'){
			soma_ho += idade[i];
			homem++;
		}
	}
	
	if(homem > 0){
		media_homem = soma_ho/(float) homem;
	}else{
		media_homem = 0.0;
	}
	if(mulher > 0){
		media_mulher = soma_mu/(float) mulher;
	}else{
		media_mulher = 0.0;
	}
	
	printf("Idade Media do Grupo >> %.2f\n", media_grupo);
	printf("Idade Media dos Homens >> %.2f\n", media_homem);
	printf("Idade Media das Mulheres >> %.2f\n", media_mulher);
	return 0;
}
