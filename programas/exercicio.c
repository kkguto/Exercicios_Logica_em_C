#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int i,j;
void bubbleSort(int v[], int n) {
	int troca;
	int contador = 0;
	for (i = 0; i < n-1; i++) {
		troca = 0;
		for (j = 0; j < n-i-1; j++) {
			contador++;
			if (v[j] > v[j+1]) {
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
				troca = 1;
			}
		}	
		if (troca == 0){
			break;
		}

	}
	printf("Qtd de comparações: %d\n", contador);
}

void selectionSort(int v[], int n) {
	int contador = 0;
	for (i = 0; i < n-1; i++) {
		int min_idx = i;
		// Encontra o menor elemento na parte não ordenada
		for (j = i+1; j < n; j++){
			contador++;
			if (v[j] < v[min_idx]){
				min_idx = j;
			}
		}
		// Troca o menor elemento com o primeiro elemento
		if (min_idx != i) {
			int temp = v[min_idx];
			v[min_idx] = v[i];
			v[i] = temp;
		}
	}
	printf("Qtd de comparações: %d\n", contador);
}

void insertionSort(int v[], int n) {
	int contador = 0;
	for (i = 1; i < n; i++) {
		int key = v[i];
		int j = i - 1;
		
		while (j >= 0 && v[j] > key) {
			contador++;
			//if (v[j] > key)
			v[j + 1] = v[j];
			j = j - 1;
		}
		v[j + 1] = key;
	}
	printf("Qtd de comparações: %d\n", contador);
}


int main(){
	
	int tam = 200000;
	int vetor[tam];
	long tempoinicial, tempofinal, tempo;
	float tempominutos;
	
	for(i = 0; i < tam; i++){
    	vetor[i] = rand()%1000;// gera valores aleatorios entre 0 e 999;
	}
	
	tempoinicial = time(NULL);
	
	bubbleSort(vetor, tam);
//	selectionSort(vetor, tam);
//	insertionSort(vetor, tam);
	
	for(i = 0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
	
	tempofinal = time(NULL);
	tempo = tempofinal - tempoinicial;
	tempominutos =  tempo / 60;

	printf("\nTEMPO INICIAL EM SEGUNDOS = %d", tempoinicial);
	printf("\nTEMPO FINAL EM SEGUNDOS = %d", tempofinal);
	printf("\nTEMPO DE PROCESSAMENTO = %d", tempo);
	printf("\nTEMPO DE PROCESSAMENTO EM MINUTOS = %.2f", tempominutos); // se o resultado for sempre 0, quer dizer que o tempo foi menor que 60segundos
	
	return 0;
	
}
