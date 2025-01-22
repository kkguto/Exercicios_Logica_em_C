#include <stdio.h>

int i, j;
int bubble_sort(int[], int);

int main(){
	
	int vetor[] = {10, 3, 5, 2, 9, 1, 4, 6, 8, 7, 0};
	int tamanho = sizeof(vetor)/sizeof(vetor[0]);
	
	bubble_sort(vetor, tamanho);
	
	for(i = 0; i < tamanho; i++){
		printf("%d ", vetor[i]);
	}
	
}

int bubble_sort(int v[], int n){
	for(i = 0; i < n ; i++){
		for(j = 0; j < n - 1; j++){
			if (v[j] > v[j+1]){
				int teste = v[j+1];
				v[j+1] = v[j];
				v[j] = teste;
			}	
		}	
	}
}
