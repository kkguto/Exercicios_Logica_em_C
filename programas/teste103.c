/*
Defina uma struct chamada Filme com os campos: 
titulo (string de até 50 caracteres), ano (int), genero (string de até 20 caracteres) e classificacao (float). 

Escreva um programa para cadastrar 3 filmes e, em seguida, exibir os filmes ordenados pela classificação (do maior para o menor).
*/

#include <stdio.h>
#include <string.h>

struct Filme{
	char titulo[50];
	int ano; 
	char genero[20];
	float classificacao;
};

int main(){
	struct Filme filme[3];
	int i, j;
	
	for (i = 0; i < 3; i++) {
		printf("\nFilme %d:\n", i+1);
	    printf("\nTitulo do Filme: ");
	    fgets(filme[i].titulo, sizeof(filme[i].titulo), stdin);
	    filme[i].titulo[strcspn(filme[i].titulo, "\n")] = 0;
	
	    printf("Ano do Filme: ");
	    scanf("%d", &filme[i].ano);
	    getchar();
	
	    printf("Genero do Filme: ");
	    fgets(filme[i].genero, sizeof(filme[i].genero), stdin);
	    filme[i].genero[strcspn(filme[i].genero, "\n")] = 0;
	
	    printf("Nota do Filme: ");
	    scanf("%f", &filme[i].classificacao);
	    getchar();
	}
	
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
			if(filme[j].classificacao < filme[j+1].classificacao){
				struct Filme temp = filme[j];
				filme[j] = filme[j+1];
				filme[j+1] = temp;
			}
		}
	}
	
	for(i = 0; i<3; i++){
		printf("%s, %d, %s, %.2f\n", filme[i].titulo, filme[i].ano, filme[i].genero, filme[i].classificacao);
	}
}
