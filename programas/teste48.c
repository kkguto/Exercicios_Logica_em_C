/*
Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias
*/

#include <stdio.h>
int idade_dias(int, int, int);

int main(){
	int anos, meses, dias;
	printf("Digite sua idade (anos,meses,dias):\n");
	scanf("%d,%d,%d", &anos, &meses, &dias);
	
	int dia = idade_dias(anos, meses, dias);
	printf("Aproximadamente >> %d dias", dia);
}

int idade_dias(int anos, int meses, int dias){
	return dias + (anos * 365) + (meses * 30);
}
