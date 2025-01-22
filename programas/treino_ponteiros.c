#include <stdio.h>
#include <stdbool.h>

void counting_sort(int vetor[], int tam){
	int i, j;
	int maior = vetor[0];
	int vetor2[tam];
	
	for (i = 0; i<tam; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	
	int contagem[maior +1];
	
	for(i = 0; i<=maior; i++){
		contagem[i] = 0;
	}
	
	for(i = 0; i<= maior; i++){
		contagem[vetor[i]]++;
	}
	
	for(i = 0; i<=maior; i++){
		contagem[i] += contagem[i-1];
	}
	
	for(j = tam - 1; j >= 0; j--){
		vetor2[contagem[vetor[j]] - 1] = vetor[j];
		contagem[vetor[j]]--;
	}
	
	for(i = 0; i<tam; i++){
		vetor[i] = vetor2[i];
	}
}
void min_max(int v[], int tam, int *min, int *max){
	
	int i;
	*min = v[0];
	*max = v[0];
	
	for(i = 0; i<tam; i++){
		if(v[i] > *max){
			*max = v[i];
		}
		
		if(v[i] < *min){
			*min = v[i];
		}
	}
}

void dobrar(int *n){
	*n *= 2;
}

void trocar_valores(int *n, int *n1){
	int temp = *n;
	*n = *n1; 
	*n1 = temp;
}

void soma_elementos(int v[], int tam, int *soma){
	int i;
	
	for(i = 0; i<tam; i++){
		*soma += v[i]; 
	}
}

void imprimir(int n){
	if(n == 10){
		printf("%d ", n);
		
	}else{
		printf("%d ", n);
		imprimir(n + 1);
	}
}

int fatorial(int n){
	int fato = 1;
	if(n == 1){
		return 1;
	}else{
		return n*fatorial(n-1);
	}
}

int somatoria(int n){
	int soma = 0;
	if(n == 0){
		return 0;
	}else{
		return n+somatoria(n-1);
	}
}
int main(){
    int matriz[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    
    bool simetrico = false;
    int i, j;
    
    for(i = 0; i<3; i++){
    	for(j = 0; j<3; j++){
    		if(matriz[i][j] == matriz[j][i]){
    			simetrico = true;
			}
		}
	}
	
	if(simetrico){
		printf("Simetrico");
	}else{
		printf("nao simetrico");
	}
    	
}
