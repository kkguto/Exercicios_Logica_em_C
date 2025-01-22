#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i, j;

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

void merge(int v[], int esq, int m, int dir) {
    int n1 = m - esq + 1;
    int n2 = dir - m;
    int ESQ[n1], DIR[n2];

    for (i = 0; i < n1; i++) {
        ESQ[i] = v[esq + i];
    }
    for (j = 0; j < n2; j++) {
        DIR[j] = v[m + 1 + j];
    }

    int i = 0, j = 0, k = esq;
    while (i < n1 && j < n2) {
        if (ESQ[i] <= DIR[j]) {
            v[k] = ESQ[i];
            i++;
        } else {
            v[k] = DIR[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        v[k] = ESQ[i];
        i++;
        k++;
    }
    while (j < n2) {
        v[k] = DIR[j];
        j++;
        k++;
    }
}

void mergeSort(int v[], int esq, int dir) {
	if (esq < dir) {
		int meio = esq + (dir - esq) / 2;
		mergeSort(v, esq, meio);
		mergeSort(v, meio + 1, dir);
		merge(v, esq, meio, dir);
	}
}

int trocar(int v[], int esq, int dir){
	int temp = v[esq];
	v[esq]= v[dir];
	v[dir]; temp;
}
int particionar(int v[], int inicio, int fim, int indice_pivo){
	int pivo = v[indice_pivo];
	int esquerda = inicio;
	int direita = fim-1;
	while (esquerda <= direita) {
		while (esquerda <= direita && v[esquerda] <= pivo)
			++esquerda;
		while (esquerda <= direita && v[direita] >= pivo)
			--direita;
		if (esquerda < direita)
			trocar(v, esquerda, direita);
	}
	int nova_posicao_pivo = esquerda;
	trocar(v, indice_pivo, nova_posicao_pivo);
	return nova_posicao_pivo;
}
void quick_sort(int v[], int inicio, int fim){
	if (inicio >= fim) return;
	int indice_pivo = fim;
	indice_pivo = particionar(v, inicio, fim, indice_pivo);
	quick_sort(v, inicio, indice_pivo - 1);
	quick_sort(v, indice_pivo + 1, fim);
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
	
//	bubbleSort(vetor, tam);
//	selectionSort(vetor, tam);
//	insertionSort(vetor, tam);
//	mergeSort(vetor, 0, tam - 1);
	quick_sort(vetor, 0, tam-1);
//	
//	for(i = 0; i<tam; i++){
//		printf("%d ", vetor[i]);
//	}
	
	tempofinal = time(NULL);
	tempo = tempofinal - tempoinicial;
	tempominutos =  tempo / 60;

	printf("\nTEMPO INICIAL EM SEGUNDOS = %d", tempoinicial);
	printf("\nTEMPO FINAL EM SEGUNDOS = %d", tempofinal);
	printf("\nTEMPO DE PROCESSAMENTO = %d", tempo);
	printf("\nTEMPO DE PROCESSAMENTO EM MINUTOS = %.2f", tempominutos); // se o resultado for sempre 0, quer dizer que o tempo foi menor que 60segundos
	
	return 0;
	
}


