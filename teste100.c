/*
Crie uma struct chamada Livro com os seguintes campos: titulo (string de até 50 caracteres), 
autor (string de até 30 caracteres), ano (int) e preco (float). 

Em seguida, crie um programa que permita ao usuário cadastrar 3 livros e depois mostre a lista de livros cadastrados com todas as informações.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Livro{
	char titulo[50];
	char autor[30];
	int ano;
	float preco;
};

int main(){
	
	setlocale(LC_ALL, "");
	
	struct Livro livro[3];
	int i;
	
	for(i = 0; i < 3; i++){
		printf("\nLivro %d\n", i+1);
		printf("Titulo do Livro: ");
		scanf(" %s", livro[i].titulo);
		
		printf("Nome do Autor: ");
		scanf(" %s", livro[i].autor);
		
		printf("Ano do livro: ");
		scanf("%d", &livro[i].ano);
		
		printf("Preço do Livro: ");
		scanf("%f", &livro[i].preco);
	}
	
	printf("\n");
	
	for(i = 0; i < 3; i++){
		printf("%s, %s, %d, %.2f\n", livro[i].titulo, livro[i].autor, livro[i].ano, livro[i].preco);
	}
	
}
