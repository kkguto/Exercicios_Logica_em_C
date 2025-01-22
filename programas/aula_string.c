#include <stdio.h>
#include <string.h>

/*
int main(){
	char nome[51];
	int i;	
	printf("Digite um nome:\n");
	fgets(nome, 51, stdin);
	nome[strlen(nome) - 1] = '\0';
	
	for(i = strlen(nome) -1; i >= 0; i--){
		printf("%c", nome[i]);
	}
}
*/

int main(){
	char nomes[5][20];
	int i;
	for(i = 0; i < 5; i++){
		printf("Digite o nome %d >> ", i + 1);
		scanf(" %s", &nomes[i]);
	}
}
