/*
Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva.
*/

#include <stdio.h>

int main(){
	int vetor[10] = {1,2,3,4,5,6,1,5,8,9};
	int i, count = 0, j;
	
	printf("Valores Iguais >> ");
	for(i = 0; i < 10; i++){
		for(j = i+1 ; j < 10; j++){
			if(vetor[i] == vetor[j]){
				printf("%d ", vetor[j]);
				break;
			}	
		}
	}
	
	return 0;
}
