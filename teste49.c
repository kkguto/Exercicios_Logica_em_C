/*
Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. 
(Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). 

A função deve retornar um valor booleano.
*/

#include <stdio.h>
#include <stdbool.h>

int num_perfeito(int num){
	int i, soma = 0;
	
	for(i = 1; i < num; i++){
		if(num % i == 0){
			soma += i;
		}
	}
	
	if(soma == num){
		return true;
	}else{
		return false;
	}
}

int main(){
	
	int num;
	
	printf("Digite o numero que deseja verificar se eh perfeito ou nao:\n");
	scanf("%d", &num);
	bool teste = num_perfeito(num);
	
	if(teste) {
		printf("Eh um numero perfeito\n");
	}else{
		printf("Nao eh um numero perfeito\n");
	}
	
	return 0;	
}
