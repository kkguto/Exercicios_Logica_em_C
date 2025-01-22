/*
Crie uma struct chamada Contato com os campos: nome (string de até 50 caracteres), telefone (string de até 15 caracteres) 
e email (string de até 50 caracteres). 

Implemente um programa que permita cadastrar até 10 contatos e, em seguida, permita ao usuário:

 - Buscar um contato pelo nome.
 - Listar todos os contatos.
 - Editar as informações de um contato.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

struct Contato{
	char nome[50];
	char telefone[15];
	char email[50];
};

int main(){
	
	int i;
	struct Contato dados[10];
	
	for(i = 0; i<10; i++){
		printf("\nContato %d\n", i+1);
		printf("Nome: ");
		fgets(dados[i].nome, sizeof(dados[i].nome), stdin);
		dados[i].nome[strcspn(dados[i].nome, "\n")] = 0;
		
		printf("Telefone: ");
		fgets(dados[i].telefone, sizeof(dados[i].telefone), stdin);
		dados[i].telefone[strcspn(dados[i].telefone, "\n")] = 0;
		
		printf("Email: ");
		fgets(dados[i].email, sizeof(dados[i].email), stdin);
		dados[i].email[strcspn(dados[i].email, "\n")] = 0;
	}
	
	while(true){
		int escolha = 0;
		printf("\n[1] Buscar um contato pelo nome\n[2] Listar todos os contatos\n[3] Editar as informações de um contato. \n[4] Sair\nSua escolha eh ");
		scanf("%d", &escolha);
		
		if(escolha == 4){
			printf("\nEncerrado\n");
			break;
		}
		
		if(escolha == 1){
			char nome_buscado[50];
			int encontrado = 0;
			
			printf("\nNome: ");
			scanf(" %s", nome_buscado);
			
			for(i = 0; i<10; i++){
				if(strcmp(dados[i].nome, nome_buscado) == 0){
					encontrado = 1;
					printf("Buscando...\n");
					sleep(5);
					printf("\nNome: %s\nTelefone: %s\nEmail: %s\n", dados[i].nome, dados[i].telefone, dados[i].email);
				}
			}

			if(!encontrado){
				printf("Buscando...\n");
				sleep(5);
				printf("\nEsse nome nao foi encontrado\n");
			}
		}else if(escolha == 2){
			printf("\n");
			
			printf("Precessando...\n");
			sleep(3);
			
			for(i = 0; i<10; i++){
				printf("%d. Nome: %s, Telefone: %s, Email: %s\n", i+1, dados[i].nome, dados[i].telefone, dados[i].email);
			}
		}else if(escolha == 3){
			
			char nome_buscado[50];
			char novo_nome[50];
			char novo_tele[15];
			char novo_email[50];
			
			int encontrado = 0;
			
			printf("\nNome: ");
			scanf(" %49s", nome_buscado);
			while (getchar() != '\n');
			
			for(i = 0; i<10; i++){
				if(strcmp(dados[i].nome, nome_buscado) == 0){
					encontrado = 1;
					
					printf("Digite o novo nome: ");
					fgets(novo_nome, sizeof(novo_nome), stdin);
					novo_nome[strcspn(novo_nome, "\n")] = 0;
					strcpy(dados[i].nome, novo_nome);
					
					printf("Digite o novo Telefone: ");
					fgets(novo_tele, sizeof(novo_tele), stdin);
					novo_tele[strcspn(novo_tele, "\n")] = 0;
					strcpy(dados[i].telefone, novo_tele);
					
					printf("Digite o novo Email: ");
					fgets(novo_email, sizeof(novo_email), stdin);
					novo_email[strcspn(novo_email, "\n")] = 0;
					strcpy(dados[i].email, novo_email);
				}
			}
			
			if(!encontrado){
				printf("Buscando...\n");
				sleep(5);
				printf("\nEsse nome nao foi encontrado\n");
			}
			
		}else{
			printf("\nValor invalido\n");
		}
	}
	
	return 0;
}
