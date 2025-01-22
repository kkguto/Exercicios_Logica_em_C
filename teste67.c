/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.          

S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3)
*/

#include <stdio.h>
#include <math.h>

float func(int n){
	int i;
	float s = 0.0;
	
	for(i = 1; i<= n; i++){
		s += (i*i+ 1.0)/(i+3.0);
	}
	return s;
}

int main(){
	
	float x = func(5);
	
	printf("%.3f", x);
	return 0;
}
