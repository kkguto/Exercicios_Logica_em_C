/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.

S = 1 + 1/1! + ½! + 1/3! + 1 /N! 
*/

#include <stdio.h>

int fatorial(int valor){
	int fatorial = 1, i;
	
	for(i = 1; i <= valor; i++){
		fatorial*=i;
	}
	
	return fatorial;
}

float func(int n){
	int i;
	float s = 0.0;
	
	for(i = 0; i <= n; i++){
		s+= 1.0/fatorial(i);
	}
	
	return s;
}

int main(){
	
	float x = func(3);
	
	printf("%f", x);
	
}
