#include <stdio.h>

void ordem(int v[], int tam){
	int i, j;
	int count_p = 0;
	int count_i = 0;
	int v2[tam];
	int v3[tam];
	
	for(i = 0; i<tam; i++){
		if(v[i] % 2 == 0){
			v2[count_p++] = v[i];
		}else{
			v3[count_i++] = v[i];
		}
	}
	
	for(i = 0; i<count_p - 1; i++){
		for(j = 0; j < count_p - i - 1; j++){
			if(v2[j] > v2[j+1]){
				int temp = v2[j];
				v2[j] = v2[j+1];
				v2[j+1] = temp;
			}
		}
	}
	for(i = 0; i<count_p - 1; i++){
		for(j = 0; j < count_p - i - 1; j++){
			if(v3[j] < v3[j+1]){
				int temp = v3[j];
				v3[j] = v3[j+1];
				v3[j+1] = temp;
			}
		}
	}
	
	for(i = 0; i<count_p; i++){
		v[i] = v2[i];
	}
	
	for(i = 0; i<count_i; i++){
		v[count_p +i] = v3[i];
	}
}

int somatorio(int v[], int i){
	if (i < 0){
		return 0;
	}else{
		return v[i] + (somatorio(v, i - 1)); 
	}
}

int potencia(int a, int b){
	int i;
	int v = 1;
	for(i = 0; i < b; i++){
		v*=a;
	}
	return v;
}

int potencia_recursiva(int a, int b){
	if(b == 0){
		return 1;
	}
	
	return a * potencia_recursiva(a, b-1);
}

int main(){
	
	return 0;
}
