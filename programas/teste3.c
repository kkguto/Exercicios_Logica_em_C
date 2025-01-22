#include <stdio.h>
#include <stdlib.h>
//tabela Ascii
#define texto "Hello world!" //variavel constante

int main(){
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char name[50] = ""; // [50] é o numero de caracteres que entrará nessa variavel
	
	printf("\nDigite sua idade:\n");
	scanf("%d", &idade);
	printf("\nDigite sua altura:\n");
	scanf("%f", &altura);
	printf("\nDigite seu nome:\n");
	scanf("%s", &name);
	
	printf("\nVoce tem %d anos, %.2f de altura e seu nome eh %s", idade, altura, name);
}


