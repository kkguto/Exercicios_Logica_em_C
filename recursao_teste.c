#include <stdio.h>
#include <stdbool.h>

int recursao_soma(int a, int b){
	if(b<a){
		return 0;
	}else{
		return a + recursao_soma(a+1, b);
	}
}

int trocar(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

bool simetria(int matriz[3][3]){
	int i, j;
    
    for(i = 0; i<3; i++){
    	for(j = 0; j<3; j++){
    		if(matriz[i][j] == matriz[j][i]){
    			return true;
			}
		}
	}
	return false;
}

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


int main(){
	
	int i, j;
	
	int vetor[6] = {2,5,1,8,6,3};
	
	int count_p, count_i;
	count_p = count_i = 0;
	int v_par[count_p], v_impar[count_i]; 
	
	for(i = 0; i<6; i++){
		if(vetor[i] % 2 == 0){
			v_par[count_p++] = vetor[i];
		}else{
			v_impar[count_i++] = vetor[i];
		}
	}
	
	for(i = 0; i < count_p -1 ; i++){
		for(j = 0; j < count_p - i -1; j++){
			if (v_par[j] > v_par[j+1]){
				int teste = v_par[j+1];
				v_par[j+1] = v_par[j];
				v_par[j] = teste;
			}	
		}	
	}
	
	for(i = 0; i < count_i - 1 ; i++){
		for(j = 0; j < count_i - i - 1; j++){
			if (v_impar[j] < v_impar[j+1]){
				int teste = v_impar[j+1];
				v_impar[j+1] = v_impar[j];
				v_impar[j] = teste;
			}	
		}	
	}
	
	for(i = 0; i < 6 - count_p; i++){
		vetor[i] = v_par[i];
	}
	
	for(i = 0; i < 6 - count_i; i++){
		vetor[i + count_i] = v_impar[i];
	}
	
	for(i = 0; i<6 ;i++){
		printf("%d ", vetor[i]);
	}
	
	return 0;
}
