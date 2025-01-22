#include <stdio.h>
#include <string.h>

int ordem_crescente(float[], int);
 
int main(){
	
	int n, i;
	
	printf("Digite a quantidade de dias:\n");
	scanf("%d", &n);
	
	float temp[n];
	
	for(i = 0; i < n; i++){
		printf("Digite a temperatura do dia %d:\n", i+1);
		scanf("%f", &temp[i]);
	}
	
	for (i = 0; i < n; i++){
		printf("%.1f ", temp[i]);
	}
	
	if (ordem_crescente(temp, n)){
		printf("\nEsta na ordem crescente");
	}else{
		printf("\nNao esta na ordem crescente");
	}
}

int ordem_crescente(float temp[], int tamanho){
	int i;
	for (i = 0; i < tamanho; i++){
		if (temp[i] > temp[i + 1]){
			return 0;
		}else{
			return 1;
		}
	}

}
