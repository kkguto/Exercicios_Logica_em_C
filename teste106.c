/*
Crie um programa que declare uma vari�vel inteira e um ponteiro para essa vari�vel. Atribua um valor � vari�vel e use o ponteiro para imprimir esse valor.
*/

#include <stdio.h>

int main(){
	
	int i = 10;
	int *ptr;
	
	ptr = &i;
	
	printf("%d", *ptr);
	
}
