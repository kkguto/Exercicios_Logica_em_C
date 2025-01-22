/*
Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.
*/

#include <stdio.h>
#include <stdbool.h>

int verificador_num_primo(int);

int main(){
	int num = 4;
	bool ehprimo;
	
	if(num > 1){
		ehprimo = verificador_num_primo(num);
	}else{
		printf("Numero tem que ser inteiro e positivo");
	}
	
	if(ehprimo){
		printf("%d eh um Numero Primo", num);
	}else{
		printf("%d nao eh um Numero Primo", num);
	}
}

int verificador_num_primo(int num){
	int i;
	bool eh_primo;
	
	for(i = 2; i < num; i++){
		if (num % i == 0){
			eh_primo = false;
			break;
		}
	}
	if(i == num){
		eh_primo = true;
	}	
	return eh_primo;
}

