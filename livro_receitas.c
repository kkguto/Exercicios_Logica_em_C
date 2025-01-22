#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM (25)
#define MAX_RECEI (5)
int i, j;

struct receitas{
	char nome[TAM];
	int quant_ingre;
	char ingredientes[10][TAM];
};

int main(){
	
	setlocale(LC_ALL, "");
	
	struct receitas lista_receitas[MAX_RECEI];
	
	char nome_recei[25];
	int num_ingre;
	char ingre[num_ingre][TAM];
	
//	FILE *livro;
//	livro = fopen("Livro_Receitas.txt", "a++");
	
	for(i = 0; i < 5; i++){
		printf("Receita %d:\n", i+1);
		fputs("Nome da Receita: ", stdout);
		getchar();
		fgets(lista_receitas[i].nome, TAM, stdin);
		lista_receitas[i].nome[strcspn(lista_receitas[i].nome, "\n")] = 0; 

		fputs("Número de Ingredientes: ", stdout);
		scanf("%d", &lista_receitas[i].quant_ingre);
		
		for(j = 0; j < lista_receitas[i].quant_ingre; j++){
			printf("Ingrediente %d: ", j+1);
			getchar();
            fgets(lista_receitas[i].ingredientes[j], TAM, stdin);
            lista_receitas[i].ingredientes[j][strcspn(lista_receitas[i].ingredientes[j], "\n")] = 0;
		}
	}
	
	printf("\nReceitas Cadastradas:\n");
	
	for(i = 0; i < MAX_RECEI; i++){
		printf("Receita %d: %s\n", i + 1, lista_receitas[i].nome);
        printf("Ingredientes:\n");
        for(j = 0; j <= lista_receitas[i].quant_ingre; j++){
        	printf("* %s\n", lista_receitas[i].ingredientes[j]);
		}
		
	}
	
	
//	fclose(livro);
}
