/*
Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.
*/
#include <stdio.h>
#include <locale.h>

int fatorial(int valor){
	int fatorial = 1, i;
	
	for(i = 1; i <= valor; i++){
		fatorial*=i;
	}
	
	return fatorial;
}

int main(){
	setlocale(LC_ALL, "");
	int valor;
	
	printf("Digita um numero inteiro positivo:\n");
	scanf("%d", &valor);
	if(valor > 0){
		int result = fatorial(valor);
		printf("Fatorial de %d >> %d", valor, result);
	}else{	
		printf("Valor negativo");
	}
	
	

}
