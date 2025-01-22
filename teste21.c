#include <stdio.h>

int converterParaCelsius(float); 

int main(){
	
	int escolha = 1;
	
	do{
		
		float temperatura, celsius;
		
		printf("Digite a temperatura em Fahrenheit que deseja converter para celsius:\n");
		scanf("%f", &temperatura); 
		
		celsius = converterParaCelsius(temperatura);
		printf("Essa temperatura em graus celsius >> %.1f C\n", celsius);
		
		printf("Deseja continuar convertendo (1 para sim e 0 para nao):\n");
		scanf("%d", &escolha);
		
	}while(escolha == 1);
	
	return 0;
}

int converterParaCelsius(float fah){
	return (fah - 32) * 5/9 ;
}


