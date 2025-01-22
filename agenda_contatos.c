
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int i, j;

int main(){
	
	FILE *agenda;
	setlocale(LC_ALL, "");
	
	while(true){
		int escolha = 0;
		agenda = fopen("agenda_contatos.txt", "a+");
		
		printf("\n[1] Salvar Contato Novo\n[2] Buscar Contato\n[3] Apagar Contato\n[4] Mostrar Contatos\n[5] Sair\n\nSua escolha é: ");
		scanf("%d", &escolha);
		
		//SALVAR CONTATO
		if(escolha == 1){
			printf("\nSalvando Novo Contato:\n\n");
			char nome[100], cidade[50], telefone[10];
			
			printf("Nome: ");
			scanf(" %s", &nome);
			
			printf("Telefone: ");
			scanf(" %s", &telefone);
			
			printf("Cidade: ");
			scanf(" %s", &cidade);
	
			fprintf(agenda, "\n%s / %s / %s\n", nome, telefone, cidade);
			fclose(agenda);
		
		//BUSCAR CONTATO	
		}else if(escolha == 2){
			
			agenda = fopen("agenda_contatos.txt", "r");
			
			char nome[100], telefone[10];
			char linha[100];
			
			printf("\nDigite o nome que deseja busca abaixo:\n\n");
		
			printf("nome: ");
			scanf(" %s", &nome);
			
			int encontrado = 0;
			
			while(fgets(linha, sizeof(linha), agenda) != NULL){
				if(strstr(linha, nome) != NULL){
					
					printf("\nBuscando...\n\n");
					sleep(4);
					printf("NOMES / TELEFONE / CIDADE \n***************************\n");
					printf("%s", linha);
					encontrado = 1;
					break;
				}
			}
			if(!encontrado){
				
				printf("\nBuscando...\n\n");
				sleep(4);
				printf("Contato não encontrado!\n\n");
			}
			fclose(agenda);
			
		//APAGAR CONTATO
		}else if(escolha == 3){
				
			char nome[100];
			char linha[100];
			int encontrado = 0;
			printf("\nDigite o nome que deseja apagar abaixo:\n\n");
	
			printf("nome: ");
			scanf(" %s", &nome);
			
			while(fgets(linha, sizeof(linha), agenda) != NULL){
				
				if(strstr(linha, nome) != NULL){
					encontrado = 1;
					
				}
			}
			
			if(!encontrado){
				
				printf("\nBuscando...\n\n");
				sleep(4);
				printf("Contato não encontrado!\n\n");
			}
			
			fclose(agenda);
			
		//MOSTRAR OS CONTATOS	
		}else if(escolha == 4){
			
			char linha[100];
			
			printf("\nNOMES / TELEFONE / CIDADE \n***************************\n");
			
			while(fgets(linha, sizeof(linha), agenda) != NULL){
				printf("%s", linha);
			}
			
			printf("***************************");
			fclose(agenda);
			
		}else if(escolha == 5){
			printf("\nAGENDA FECHADA E SALVA COM SUCESSO\n");
			fclose(agenda);
			break;
		}else{
			printf("\nSelecione uma Opção Válida!\n");
		}
	}
	
	return 0;
}
