#include <stdio.h>
#include <stdlib.h>

#define text "Soma, Subtra��o, Multiplica�ao e Divisao" //Variavel imutavel

int main(){
	int A, B, soma, subtr, mult, divis, resto_divis; //variaveis vazias do tipo numero inteiro
	printf("%s\n", text);
	printf("\nDigite o primeiro numero:\n");
	scanf("%d", &A);
	printf("\nDigite o segundo numero:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	resto_divis = A % B;
	
	printf("Soma: %d\n", soma);
	printf("Subtra�ao: %d\n", subtr);
	printf("Multiplica�ao: %d\n", mult);
	printf("Divisao: %.2f\nO resto dessa divisao: %d", divis, resto_divis);
	
	system("pause");
}
