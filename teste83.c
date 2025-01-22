/*
Escreva um algoritmo que solicite ao usuário a entrada de 5 nomes, e que exiba a lista desses nomes na tela. 
Após exibir essa lista, o programa deve mostrar também os nomes na ordem inversa em que o usuário os digitou, um por linha.  
*/

#include <stdio.h>

int main(){
	char nomes[5][50] = {"gustavo", "marco", "luzia", "Caio", "Luiz"};
	int i;
	
	for(i = 0; i < 5; i++){
		printf("%s\n", nomes[i]);
	}
	printf("\n");
	for(i = 4; i >= 0; i--){
		printf("%s\n", nomes[i]);
	}	
} 
