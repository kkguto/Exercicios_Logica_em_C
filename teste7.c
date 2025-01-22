#include <stdio.h>
#include <stdlib.h>
#define text "Teste 7 - operadores logicos"
int main(){ //Função principal
	
	printf("%s\n", text);
	
	float x;
	
	printf("Digite sua nota:\n");
	scanf("%f", &x);
	
	if (x >= 0 && x < 4.5){ // && = and -> Todas as condiçoes tem que ser True 
		printf("\nREPETIO!");
	} else if(x >= 4.5 && x < 6.5){
		printf("\nRECUPERACAO");
	} else {
		printf("\nAPROVADO");
	}
}
