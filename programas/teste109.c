/*
Crie uma fun��o que receba um n�mero inteiro por ponteiro e altere seu valor dentro da fun��o. Chame a fun��o e verifique a altera��o.
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
