/*
Crie um programa que utilize ponteiros para modificar o valor de um elemento de um vetor, dado o índice do elemento.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, *vetor;
	int tam;
	
	printf("Digite o Tamanho: ");
	scanf("%d", &tam);
	
	vetor = (int *) malloc(tam * sizeof(int));
	
	if(vetor == NULL){ //verificando se o vetor foi alocando 
		printf("Deu Ruim\n");
		free(vetor);
		return 1;
	}else{
		for(i = 0; i<tam; i++){
			printf("Valor %d: ", i+1);
			scanf("%d", &*(vetor+i));
		}
		
		int index, novo_valor;
		
		printf("\nDigite o Indice para alterar: ");
		scanf("%d", &index);
		
		printf("\nDigite o novo Valor: ");
		scanf("%d", &novo_valor);
		
		//Modifica o valor do Vetor[index] usando ponteiros
		*(vetor+index) = novo_valor;
		
		for(i = 0; i<tam; i++){
			printf("Valor %d: %d\n", i+1, vetor[i]);
		}
		
		free(vetor);		
	}

	return 0;
	
}
