#include <stdio.h>

void pares(int[], int tamanho);

int main() {
        int tamanho = 10;
        int vetor[10], i;
        pares(vetor, tamanho);
}

void pares(int vetor[], int tamanho) {
        int i;
        for (i = 0; i < tamanho; i++) {
                vetor[i] = i * 2;
                printf("%d ", vetor[i]);
        }
}
