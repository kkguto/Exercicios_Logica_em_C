/*
Leia um vetor de 20 posi��es e em seguida um valor X qualquer. 
Seu programa devera fazer uma busca do valor de X no vetor lido e informar a posi��o em que foi encontrado ou se n�o foi encontrado.
*/

#include <stdio.h>

int main(){
	
	int vetor[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int i, x = 15, encontrado = 0, count = 0;
	
	for(i = 0; i <20; i++){
		if(vetor[i] == x){
			encontrado = 1;
			count = i;
		}
	}
	
	if(encontrado){
		printf("Encontrado e estava na posicao %d do vetor", count);
	}else{
		printf("Nao enontrado");
	}
}
