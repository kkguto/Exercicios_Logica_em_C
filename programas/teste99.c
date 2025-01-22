/*
Defina uma struct chamada Produto com os campos: nome (string de at� 30 caracteres), codigo (int), preco (float) e quantidade (int). 
Escreva um programa que permita ao usu�rio cadastrar at� 5 produtos e, em seguida, exiba a lista de produtos com as informa��es de cada um.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

struct Produto{
	char nome[30];
	int codigo;
	float preco;
	int quantidade;
};

int main(){
	
	setlocale(LC_ALL, "");
	
	int i;
	struct Produto dados[5];
	while (true){
		
		int escolha = 0;
		printf("[1]Cadastrar 5 Produtos\n[2]Exibir Produtos\n[3]Sair\nSua Escolha eh ");
		scanf("%d", &escolha);
		
		if (escolha == 3){
			printf("\nEncerrado\n");
			break;
		}
		
		if (escolha == 1){
			getchar();
			for(i = 0; i < 5; i++){
				printf("Produto %d:\n", i+1);
				fputs("Nome do Produto: ", stdout);
				fgets(dados[i].nome, sizeof(dados[i].nome), stdin);
				dados[i].nome[strcspn(dados[i].nome, "\n")] = 0;
				
				printf("Codigo do Produto: ");
				scanf("%d", &dados[i].codigo);
				
				printf("Pre�o do Produto: ");
				scanf("%f", &dados[i].preco);
				
				printf("Quantidade: "); 
				scanf("%d", &dados[i].quantidade);
				
				while(getchar() != '\n');
			}			
		}else if(escolha == 2){
			printf("Nome  Codigo  Pre�o  Quant\n\n");
			for(i = 0; i < 5; i++){
				printf("%s  %d  R$%.2f  %d\n\n", dados[i].nome, dados[i].codigo, dados[i].preco, dados[i].quantidade);
			}	
		}else{
			printf("\nValor Inv�lido\n");
		}
	}

	return 0;
}

