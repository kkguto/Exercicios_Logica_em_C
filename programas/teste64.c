/*
Escreva uma fun��o que recebe, por par�metro, um valor inteiro e positivo e retorna o somat�rio desse valor.
*/

#include <stdio.h>

int somatorio(int n){
	int i, soma = 0;
	for(i = 0; i <= n; i++){
		soma += i;
	}
	
	return soma;
}

int main(){
	
	int x = somatorio(5);
	
	printf("Resultado da Somatoria >> %d", x);
	
}
