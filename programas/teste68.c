/*
Escreva uma fun��o que recebe, por par�metro, dois valores X e Z e calcula e retorna X^z . 
(sem utilizar fun��es ou operadores de pot�ncia prontos) 
*/

#include <stdio.h>

int potencia(int x, int z){
	int i, result = 1; 
	for(i=0; i<z;i++){
		result *= x;	
	}
	return result;
}

int main(){
	
	int x = potencia(2, 10);
	printf("%d", x);
}
