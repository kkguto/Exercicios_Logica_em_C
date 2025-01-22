#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h> 
#include <time.h>

void armazenar(FILE *armazem){
	
	char nome[100];
	int ano_lanco;
	
	printf("\n**Armazenar Livros**\n\n");
	printf("Nome do Livro: ");
	scanf(" %99[^\n]", nome); 	
	
	printf("Ano de Lançamento: ");
	scanf("%d", &ano_lanco);
	
	fprintf(armazem, "\n%d - %s", ano_lanco, nome);
	
}

void buscar_livro(FILE *armazem){
	char linha[100];
	char nome[100];
	int encontrado = 0;
	printf("\n**Buscar Livro**\n\n");
	printf("Nome do Livro: ");
	scanf(" %99[^\n]", nome); 
	
	while(fgets(linha, sizeof(linha), armazem) != NULL){
		if(strstr(linha, nome) != NULL){
			encontrado = 1;
			printf("Buscando...\n");
			sleep(5);
			printf("\n%s\n", linha);
		}
	}
	if(!encontrado){
		printf("Esse livro não está no armazem ou o nome dele está escrito incorretamente!\n\n");
	}
}

void mostrar_livros(FILE *armazem){
	char linha[100];

	printf("\n**ANO - NOME DO LIVRO**\n\n");

	while(fgets(linha, sizeof(linha), armazem) != NULL){
		printf("%s", linha);
	}
}

int main(){
	setlocale(LC_ALL, "");
	FILE *armazem;

	while(true){
		int escolha = 0;
		
		armazem = fopen("livraria.txt", "a+");
		printf("\n**LIVRARIA**\n\n");
		printf("[1]Armazenar Livro\n[2]Buscar Livro\n[3]Mostrar Livros\n[4]Sair\n\nSua escolha é: ");
		scanf("%d", &escolha);
		
		if(escolha == 4){
			printf("\n**Livros Salvos com Sucesso!**\nArmazenamento Encerrado.");
			fclose(armazem);
			break;
		}
		
		if(escolha == 1){
			armazenar(armazem);
			fclose(armazem);//Atualiza o .txt
			
		}else if(escolha == 2){
			armazem = fopen("livraria.txt", "r");
			buscar_livro(armazem);
			fclose(armazem);
			
		}else if(escolha == 3){
			mostrar_livros(armazem);
			fclose(armazem);
		}
			
	}
	
	return 0;
}
