/*
Escreva um programa que receba dois números inteiros e troque os valores usando ponteiros.
*/

#include <stdio.h>

void trocar(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	
	int a = 9; 
	int b = 5;
	
	printf("%d %d\n", a, b);
	
	trocar(&a, &b);
	
	printf("\n%d %d", a, b);
	
}
