#include <stdio.h>
#include <stdlib.h>

#define text "Teste 6 - Condicionais"

int main(){
	printf("%s\n", text);
	
	float x;
	printf("Digite sua nota:\n");
	scanf("%f",&x);
	
	if(x >= 6.5){ //validando se x é maior ou não que 6.5
		printf("Voce passou\n");
	} else {
		printf("Pegou Rec\n");
	}
	system("pause");
	
	printf("\nCALCULADORA!\n");

	int num1, num2, soma, subtr, mult, divis, escolha; //7 variaveis do tipo numero inteiro recebendo valor vazio
	
	printf("\nDigite o primeiro numero:\n");
	scanf("%d", &num1);
	printf("\nDigite o segundo numero:\n");
	scanf("%d", &num2);
	
	printf("\nAgora escolha uma das opcoes abaixo para realizar o calculo:\n");
	printf("[1] Soma\n");
	printf("[2] Subtr\n");
	printf("[3] Mult\n");
	printf("[4] Divis\n");
	scanf("%d", &escolha);
	
	if(escolha == 1){
		soma = num1 + num2;
		printf("O resultado da Soma eh: %d", soma);	
	} else if(escolha == 2){
		subtr = num1 - num2;
		printf("O resultado da subtr eh: %d", subtr);	
	} else if (escolha == 3){
		mult = num1 * num2;
		printf("O resultado da mult eh %d", mult);
	} else if (escolha == 4){
		divis = num1 / num2;
		printf("O resultado da divis eh: %d", divis);	 
	} else {
		printf("Digite uma opcao valida!");
	}	 
}
