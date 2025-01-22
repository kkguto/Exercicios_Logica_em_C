#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibir_divisores(int[], int tam);

int main() {
  int v[10], tam, i;
  tam = sizeof(v) / sizeof(v[0]);
  srand(time(NULL));

  for (i = 0; i < tam; i++) {
    v[i] = 10 + rand() % 11;
  }

	exibir_divisores(v, tam);
}

void exibir_divisores(int v[], int tam){

	int i, j;
	
	for (i=0; i<tam; i++){
		printf("Os divisores de %d: ", v[i]);
		
		for (j = 1; j <= v[i]; j++){
			if (v[i] % j == 0){
				printf("%d ", j);
			}
		}
		printf("\n");
	}

}
