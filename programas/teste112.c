/*
Crie um programa que aloque dinamicamente mem�ria para um vetor de inteiros e preencha com valores inseridos pelo usu�rio. 
Imprima os valores ap�s o preenchimento.
*/

#include <stdio.h>
#include <stdlib.h> //Usar a fun�ao malloc - malloc ira retornar um ponteiro

void alocacao_estatica(){
	int vetor[5];
	int i;
	int *ptr = vetor;
	
	for(i = 0; i<5; i++){
		printf("Valor %d: ", i + 1);
		scanf("%d", &*(ptr+i));
	}
	
	printf("\n");
	
	for(i = 0; i<5; i++){
		printf("valor %d: %d\n", i+1, *(ptr+i));
	}
}

void alocacao_dinamica(){
	
	int *vetor, i;
	int tam;
	printf("Digite o tam: ");
	scanf("%d", &tam);
	vetor = malloc(tam * sizeof(int));
	
	if(vetor == NULL){ //verificando se a memoria foi alocada ou n�o. Caso n�o, vai retornar um ponteiro Nulo.
		printf("\nDeu Ruim\n");
	}else{
		
		printf("\nTudo certo\n\n");
		
		//armazenando valores nos vetores usando ponteiros
		for(i = 0; i<tam; i++){
		printf("Valor %d: ", i+1);
		scanf("%d", &*(vetor+i));
		}
		
		printf("\n");
		
		//Imprimindo valores do vetor
		for(i = 0; i<tam; i++){
			printf("Valor %d: %d\n",i+1, *(vetor+i));
		}
		
		//liberando a mem�rio alocada
		free(vetor);
	}
	
	
}

int main(){
	alocacao_dinamica();
	return 0;
}
