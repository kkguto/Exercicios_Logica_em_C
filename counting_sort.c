#include <stdio.h>

int i, j;

void counting_sort(int vetor[], int tam){
	int maior = vetor[0];
	int vetor2[tam];
	
	for(i=0; i<tam; i++){
		if(vetor[i]>maior){
			maior = vetor[i];
		}
	}
	
	int contagem[maior+1];
	
	for(i = 0; i <= maior; i++){
		contagem[i] = 0;
	}
	
	for(i = 0; i<=maior; i++){
		contagem[vetor[i]]++;
	}
	
	for(i = 0; i < tam; i++){
		contagem[i] += contagem[i-1];
	}
	
	for(j = tam -1; j >= 0; j--){
		vetor2[contagem[vetor[j]] - 1] = vetor[j];
		contagem[vetor[j]]--;
	}
	
	for(i = 0; i<tam; i++){
		vetor[i] = vetor2[i];
	}
}


int main(){
	
	int vetor[6] = {20201025,20210930,20191201,20200101,20211111,20180115};
	
	counting_sort(vetor, 6);
	
	for(i = 0; i<6; i++){
		printf("%d ", vetor[i]);
	}

	return 0;
}
