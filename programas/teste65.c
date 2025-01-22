/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S

S = 1 + ½ + 1/3 + ¼ + 1/5 + 1/N. 
*/

#include <stdio.h>

float func(int n){
	int i;
	float s = 0.0;
	for(i = 1; i <= n; i++){
		s += 1.0/i; 
	}
	
	return s;
}

int main(){
	
	float x = func(3);
	
	printf("%f", x);
	
}
