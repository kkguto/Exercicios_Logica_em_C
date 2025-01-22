#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define TAM (50)
int i;

struct cliente{
	char nome_cliente[TAM];
	int idade_cliente;
};

void exibir_clientes(struct cliente *lista){
	for(i = 0; i<10; i++){
		printf("\nNome do cliente lido %d = %s", i+1, lista[i].nome_cliente);
		printf("\nIdade do cliente lido %d = %d", i+1, lista[i].idade_cliente);
		printf("\n");
	}
}



int main(){
	
	setlocale(LC_ALL, "");
	
	struct cliente lista_clientes[30];
	char name[TAM];
	char filename[TAM];
	char idade_text[3];
	int idade;
	
	printf("Nome do arquivo (.txt): ");
	scanf(" %s", &filename);
	
	char *FILENAME = filename;
	
	FILE *arquivo = fopen("gerenciador.txt", "w");
	if(arquivo == NULL){
		puts("Erro ao abrir o Arquivo");
		return 1;
	}else{
		for(i = 0; i < 10; i++){
			printf("Cliente %d:\n", i+1);
			fputs("Digite o nome do Cliente = ", stdout);//stdout escreve no console
			scanf(" %s", name);
			fputs("Digite a idade do Cliente = ", stdout);//stdout escreve no console
			scanf("%d", &idade);
			printf("\n");
			
			sprintf(idade_text,"%d",idade);
			fprintf(arquivo, "%s\n", name);
			fprintf(arquivo, "%s\n", idade_text);
			fputs("-\n", arquivo);	
		}
		fclose(arquivo);
	
	arquivo = fopen("gerenciador.txt", "r");
	
	char linha[50];
	i = 0;
	while(!feof(arquivo)){

		fgets(linha,50,arquivo);
		strcpy(lista_clientes[i].nome_cliente, linha);
		lista_clientes[i].nome_cliente[strcspn(lista_clientes[i].nome_cliente, "\n")] = '\0';
		
		fgets(linha, 50, arquivo);
		lista_clientes[i].idade_cliente = atoi(linha);
		
		fgets(linha,50,arquivo);
		i++;
		
	}
	
	fclose(arquivo);
	
	printf("\nREGISTROS DO ARQUIVO DE DADOS\n\n");
	exibir_clientes(lista_clientes);

		
	}
	
	return 0;
}
