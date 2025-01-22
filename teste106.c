/*
Crie um programa que declare uma variável inteira e um ponteiro para essa variável. Atribua um valor à variável e use o ponteiro para imprimir esse valor.
*/

#include <stdio.h>

int main(){
	
	int i = 10;
	int *ptr;
	
	ptr = &i;
	
	printf("%d", *ptr);
	
}
