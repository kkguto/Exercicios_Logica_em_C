/*
Fa�a uma fun��o que leia um n�mero n�o determinado de valores positivos e retorna a m�dia aritm�tica dos mesmos.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int media();

int main(){
	setlocale(LC_ALL, "");

	float result = media();
	
	if (result >= 0){
		printf("M�dia >> %.2f\n", result);
	}else{
		printf("Nenhum valor positivo foi inserido.\n");
	}
	return 0;	
}

int media(){
	int count = 0;
	float soma = 0.0, valor;
	
	while(true){
		printf("Digite um valor positivo (ou um valor negativo para sair): ");
        scanf("%f", &valor);
		
		if(valor < 0){
			break;
		}
		
		soma+= valor;
		count++;
	}
	
	if (count > 0){
		return soma/(float)count;	
	} else {
		return -1;
	}
}
