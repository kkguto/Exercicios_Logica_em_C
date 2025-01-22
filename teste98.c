/*
Crie uma struct chamada Pessoa com os seguintes campos: nome (string de até 50 caracteres), idade (int) e altura (float). 
Escreva um programa que leia os dados de 3 pessoas, armazene-os em um array de structs e depois exiba os dados de todas as pessoas cadastradas.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Pessoa{
	
	char nome[50];
	int idade;
	float altura;
};

int main(){
	
	struct Pessoa dados[3];
	int i;
	printf("Cadastrando dados:\n");
	
	for(i = 0; i < 3; i++){
		printf("\nPessoa %d:\n", i+1);
		fputs("Nome da Pessoa: ", stdout);
		fgets(dados[i].nome, sizeof(dados[i].nome), stdin);
		dados[i].nome[strcspn(dados[i].nome, "\n")] = 0;
		
		printf("Idade da Pessoa: ");
		scanf("%d", &dados[i].idade);
		
		printf("Altura da Pessoa: ");
		scanf("%f", &dados[i].altura);
		
		while (getchar() != '\n');
	}
	
	printf("\n");
	for(i = 0; i < 3; i++){
		printf("Nome: %s, Idade: %d, Altura: %.2f\n", dados[i].nome, dados[i].idade, dados[i].altura);
	}
	return 0;
}
