#include <stdio.h>

int main(){
	
	int i, x = 2;
	int vetor_impar [10], vetor_par[20];
	printf("Numeros Impares:\n\n");
	for(i = 0; i < 10; i++){
		vetor_impar[i] = 2*i + 1; // exemplo: 2 * 0 + 1 = 1; 2 * 1 + 1 = 3 e assim por diante 
	}
	
	for(i = 0; i < 10; i++){
		printf("%d\n", vetor_impar[i]);
	}
	printf("\n");
	printf("Numero Pares:\n\n");
	for (i = 0; i < 20; i++){
		vetor_par[i] = i * 2;
	}
	for (i = 0; i < 20; i++){
		printf("%d\n", vetor_par[i]);
	}
	
}
