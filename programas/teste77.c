/*
Leia dois vetores de 4 posições. Verifique e escreva se um é anagrama de outro. 
Ex:      ARARA                      ARARA – são anagramas
*/

#include <stdio.h>
#include <string.h>


int bubble_sort_string(char nomes[], int n){
	int i, j;
	char test;
	
	for(i = 0; i < n ; i++){
		for(j = 0; j < n - 1; j++){
			if(nomes[j] > nomes[j + 1]){ //retorna um valor positivo, caso nome[j] for maior que nomes[j+1]
                test = nomes[j];
                nomes[j] = nomes[j + 1];
                nomes[j + 1] = test;  
			}
		}	
	}
}

int main(){
		
	char palavra1[5] = "armo", palavra2[5] = "roma";
	int tamanho1 = strlen(palavra1), tamanho2 = strlen(palavra2);
	int i, j, anagrama = 0;
	
	bubble_sort_string(palavra1, tamanho1);
	bubble_sort_string(palavra2, tamanho2);
	
	if(strcmp(palavra1, palavra2) == 0 && tamanho1 == tamanho2){
		printf("Boa");
	}else{
		printf("PAIA");
	}
	return 0;
}
