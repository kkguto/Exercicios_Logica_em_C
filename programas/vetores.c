#include <stdio.h>
#include <Windows.h>

int main(){
	int i;
	int v[5], soma_v = 0, vet[5];
	float vetor[] = {10.0, 5.0, 60.0, 4.0, 1.6, 10.5, 4.5, 12.3}, soma_vetor = 0;
	
	v[0] = 50;
	v[1] = 60;
	v[2] = 70;
	v[3] = 80;
	v[4] = 90;
	
	float media = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;
	printf("media = %.2f\n\n", media);
	
	for(i = 0; i < 5; i++){
		soma_v += v[i]; //0 = 0 + v[0] e assim por diante ate o v[4]
	}
	printf("soma = %d\n\n", soma_v);
	
	for (i = 0; i < (sizeof(vetor)/sizeof(vetor[0])); i++){
		printf("%.1f ", vetor[i]);
		Sleep(500);
		soma_vetor += vetor[i];
	}
	printf("\nsoma desse vetor = %.1f\n", soma_vetor);
	
	for (i = 0; i < 5; i++){
		printf("Insira um valor para o vetor:\n");
		scanf("%d", &vet[i]);
	}
	printf("Valores inseridos:\n");
	for(i = 0; i < (sizeof(vet)/sizeof(vet[0])); i++){
		printf("%d ", vet[i]);
	}
	
	
}
