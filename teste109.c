/*
Crie uma função que receba um número inteiro por ponteiro e altere seu valor dentro da função. Chame a função e verifique a alteração.
*/

#include <stdio.h>

void alteracao(int *x){
	int i;
	
	printf("\nDigite um valor para altera o ptr: ");
	scanf("%d", &i);
	
	*x = i;
}

int main(){
	
	int x = 5;
	printf("x original = %d\n", x);
	
	alteracao(&x);
	
	printf("\nx alterado = %d", x);
}
