#include <stdio.h>

int i;
int funcao(int[], int, int[], int);

int main(){
	
	int vetor1[] = {1, 4, 2, 5}, vetor2[] = {4, 6, 1};
	int tam_v1 = sizeof(vetor1)/sizeof(vetor1[0]), tam_v2 = sizeof(vetor2)/sizeof(vetor2[0]);
	
	funcao(vetor1, tam_v1, vetor2, tam_v2);
	
	return 0;
}

int funcao(int v1[], int n1, int v2[], int n2){
	
	int v_junto[n1+n2], v_igual[n1+n2];
	
	//Uniao dos elementos
	for(i = 0; i < n1; i++){
		v_junto[i] = v1[i];
	}
	for(i = 0; i < n2; i++){
		v_junto[i + n1] = v2[i];
	}
	//---------------------
	printf("\n");
	
	for(i = 0; i < n1 + n2 - 1; i++){
		if (v_junto[i] == v_junto[i+1]){
			v_igual[i] = v_junto[i];
		}
	}
	for(i = 0; i < n1+n2; i++){
		printf("%d ", v_igual[i]);
	}
		
}
