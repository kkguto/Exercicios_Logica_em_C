#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
	
	//declara��o das vari�veis
	char name[50];
	unsigned int items_per_hour, num_hour, total, triple_total;
	bool produtivo;
	
	//***Coleta de dados***
	printf("Digite o nome da linha:\n");
	scanf("%s", &name);
	printf("Digite quantos items dessa linha sao produzidos por hora:\n");
	scanf("%u", &items_per_hour);
	printf("Digite o numero de horas trabalhadas:\n");
	scanf("%u", &num_hour);
	
	//calculo do items total produzido e valida��o de se foi produtivo ou n�o
	total = items_per_hour * num_hour;
	triple_total = (total << 1) + total; // (total * 2) + total == total * 3
	produtivo = total > 1000;
	
	//Sa�das de dados
	printf("\n***Resultado***\n");
	printf("Nome da Linha >> %s\n", name);
	printf("Produ��o Total do Dia (Triplicada)>> %u\n", triple_total);
	printf("Items produzido por Hora >> %u\n", items_per_hour);
	printf("Foi Produtivo >> %d\n", produtivo);
}
