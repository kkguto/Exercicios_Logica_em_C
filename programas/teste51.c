/*
Fa�a uma fun��o que recebe um valor inteiro e verifica se o valor � positivo ou negativo. A fun��o deve retornar um valor booleano.
*/

#include  <stdio.h>
#include <stdbool.h>

int verificar_positivo(int num){
	if (num > 0){
		return 1;
	}else if (num < 0){
		return -1;
	}else{
		return 0;
	}		
}

int main(){
	
	int value = verificar_positivo(66);
	if (value == 1){
		printf("Valor >> Positivo");
	}else if(value == -1){
		printf("Valor >> Negativo");
	}else{
		printf("Valor >> Nulo");
	}
	
	return 0;
}
