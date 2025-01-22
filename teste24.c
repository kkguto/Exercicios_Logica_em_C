#include <stdio.h>

void sacar(double*saldo, double saque){
	if (*saldo < saque){
		printf("Saque maior que o saldo disponivel\n");
	}else{
		*saldo = *saldo - saque;
		printf("Saque de R$ %.2lf\n", saque);	
	}
}

void depositar(double*saldo, double deposito){
	*saldo = *saldo + deposito;
	printf("Deposito de R$ %.2lf\n", deposito);
}

void verificar_saldo(double saldo){
	printf("Saldo Atual >> %.2lf\n", saldo);
}

int main(){
	int escolha = 0;	
	double saldo, saque, deposito;
	saldo = 500;
	while (escolha != 4){

		printf("\nCAIXA ELETRONICO!\n");
		printf("\nEscolha uma das opções abaixo:\n");
		printf("1. Sacar\n");
		printf("2. Depositar\n");
		printf("3. Verificar Saldo\n");
		printf("4. Sair\n");
		printf("\nDigite a opção desejada: ");
		scanf("%d", &escolha);
		
		if (escolha == 1){
			printf("Digite a quantia que desaja sacar:\n");
			scanf("%lf", &saque);
			sacar(&saldo, saque);	
		}else if(escolha == 2){
			printf("Digite a quantia que desaja Depositar:\n");
			scanf("%lf", &deposito);
			depositar(&saldo, deposito);
			
		}else if(escolha == 3){
			verificar_saldo(saldo);
			
		}else if(escolha == 4){
			printf("\nPrograma encerrado\n");
			
		}else{
			printf("\nDigite uma opçao valida\n");
		}
		
	}
	return 0;
}


