#include <stdio.h>

int i, j;
//void merge(int v[], int esq, int m, int dir) {
//    int n1 = m - esq + 1;
//    int n2 = dir - m;
//    int ESQ[n1], DIR[n2];
//
//    for (i = 0; i < n1; i++) {
//        ESQ[i] = v[esq + i];
//    }
//    for (j = 0; j < n2; j++) {
//        DIR[j] = v[m + 1 + j];
//    }
//
//    int i = 0, j = 0, k = esq;
//    while (i < n1 && j < n2) {
//        if (ESQ[i] <= DIR[j]) {
//            v[k] = ESQ[i];
//            i++;
//        } else {
//            v[k] = DIR[j];
//            j++;
//        }
//        k++;
//    }
//
//    while (i < n1) {
//        v[k] = ESQ[i];
//        i++;
//        k++;
//    }
//    while (j < n2) {
//        v[k] = DIR[j];
//        j++;
//        k++;
//    }
//}
//
//void mergeSort(int v[], int esq, int dir) {
//	if (esq < dir) {
//		int meio = esq + (dir - esq) / 2;
//		mergeSort(v, esq, meio);
//		mergeSort(v, meio + 1, dir);
//		merge(v, esq, meio, dir);
//	}
//}
//
//int main(){
//	
//	int n = 6;
//	int vetor[6] = {20201025, 20210930, 20191201, 20200101, 20211111, 20180115};
//	
//	mergeSort(vetor, 0, n - 1);
//	
//	for(i = 0; i<6; i++){
//		printf("%d ", vetor[i]);
//	}
//	
//	return 0;
//}
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
	int vetor1[5] = {123, 124, 125, 126, 127};
	int vetor2[5] = {80, 90, 85, 90, 70};
	
	quick_sort(vetor1, 0, 5- 1);
	
	
	for(i = 0; i<5; i++){
		printf("%d \t %d\n", vetor2[i], vetor1[i]);
	}
	
}
