#include <stdio.h>
#include <stdbool.h>

int main(){
	
	float valor_total, valor_final, desconto;
	int escolha = 1;
	do {
		printf("Digite o valor total da compra para calcular o desconto:\n");
		scanf("%f", &valor_total);
		
		if (valor_total < 100){
			desconto = valor_total * 5/100;
			valor_final = valor_total - desconto;
			printf("Valor Final >> R$ %.2f\n",valor_final);
				
		}else if (valor_total >= 100 && valor_total < 300){
			desconto = valor_total * 10/100;
			valor_final = valor_total - desconto;
			printf("Valor Final >> R$ %.2f\n",valor_final);
			
		}else if (valor_total > 300) {
			desconto = valor_total * 15/100;
			valor_final = valor_total - desconto;
			printf("Valor Final >> R$ %.2f\n",valor_final);
		}
		
		printf("\nDeseja realizar outro calculo (1 para sim e 0 para nao):\n");
		scanf("%d", &escolha);
	} while(escolha == 1);	
	printf("\nPrograma encerrado!\n");
}
