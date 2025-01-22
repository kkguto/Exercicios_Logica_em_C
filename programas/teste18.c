#include <stdbool.h>
#include <stdio.h>

int main() {	  
	unsigned int valor_sacar, carteira, escolha = 1, nota100, nota50, nota20, nota10, resto;
	bool sacar;
	do{
	
		// printf("Digite o valor que deseja sacar(entre R$10 e R$1000, multiplos de
		// 10):\n"); scanf("%d", valor_sacar);
		
		valor_sacar = 270;
		carteira = 1000;
		
		sacar = (valor_sacar % 10 == 0) && (valor_sacar <= carteira);
		
		if (sacar){
			nota100 = valor_sacar / 100;
			resto = valor_sacar % 100;
			
			nota50 = valor_sacar / 50;
			resto = valor_sacar % 50;
			
			nota20 = valor_sacar / 20;
			resto = valor_sacar % 20;
			
			nota10 = valor_sacar / 10;
			resto = valor_sacar % 10;
			
			carteira -= valor_sacar;
		
		}else{
			printf("Valor Invalido ou Maior que ha na carteira!");
		}
		
		printf("%u, %u", resto, carteira);
		
	}while()
}

