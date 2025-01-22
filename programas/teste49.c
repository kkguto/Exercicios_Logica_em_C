/*
Fa�a uma fun��o que verifique se um valor � perfeito ou n�o. Um valor � dito perfeito quando ele � igual a soma dos seus divisores excetuando ele pr�prio. 
(Ex: 6 � perfeito, 6 = 1 + 2 + 3, que s�o seus divisores). 

A fun��o deve retornar um valor booleano.
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
