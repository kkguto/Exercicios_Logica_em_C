/*
Faça um programa que receba a idade de dez pessoas e que calcule e mostre a quantidade de pessoas com idade maior ou igual a 18 anos.
*/


#include <stdio.h>

int main(){
	int i, idade, idade_maior18 = 0, idade_menor18 = 0;
	for(i = 0; i < 10; i++){
		printf("Digite a idade da pessoa %d:\n", i+1);
		scanf("%d", &idade);
		if (idade >= 18){
			idade_maior18 ++;
		}else{
			idade_menor18 ++;
		}
	}
	printf("Idade maior que 18 >> %d pessoas\n", idade_maior18);
	printf("Idade menor que 18 >> %d pessoas\n", idade_menor18);	

}
