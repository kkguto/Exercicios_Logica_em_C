/*
Fa�a uma fun��o que recebe um valor inteiro e verifica se o valor � par ou �mpar. A fun��o deve retornar um valor booleano.
*/

#include <stdio.h>
#include <stdbool.h>
bool verificador_par(int num){
	return num % 2 == 0; 
}

int main(){
	bool verificador = verificador_par(3);
	if(verificador){
		printf("Eh um numero Par");
	}else{
		printf("Eh um numero Impar");
	}
}
