/*
Escreva um programa que receba uma string e utilize ponteiros para contar quantos caracteres ela possui (não conte o caractere nulo \0).
*/

#include <stdio.h>

int main(){
	int count = 0, i;
	char string[15] = {"Gustavo Melo"};
	
	char *ptr = string;
	
	//Procurando o caracter Nulo
	while(*ptr != '\0'){
		
		if(*ptr != ' '){ //Aqui esta ignorando o caracter vazio
			count++; //incrementa no contador
		}
		
		ptr++; //passa para o proximo caracter	
	
	}
	
	printf("%d", count);
	
	
	return 0;
}
