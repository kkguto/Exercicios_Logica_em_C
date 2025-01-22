/*
Leia 3 vetores de 9 posições e crie outro com o 1º terço do primeiro, o 2º terço do segundo e o ultimo terço do 3º. Escrever o vetor resultante ao final.
*/

#include <stdio.h>

int main(){
	int vetor1[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int vetor2[9] = {10, 11, 12, 13, 14, 15, 16, 17, 18};
	int vetor3[9] = {19, 20, 21, 22, 23, 24, 25, 26, 27};
	
	int vetor_final[9];
	int i;
	
	for(i = 0; i < 9; i++){
		if(i <= 2){
			vetor_final[i] = vetor1[i];
		}else if(i >= 3 && i <= 5){
			vetor_final[i] = vetor2[i];
		}else{
			vetor_final[i] = vetor3[i];
		}	
	}
	
	for(i = 0; i < 9; i++){
		printf("%d ", vetor_final[i]);
	}
	
	return 0;
}
