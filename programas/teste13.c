#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	char modelo[50];
	unsigned int distancia, consumo, distancia_quadrup;
	bool economico;
	
	printf("Digite o modelo do carro:\n");
	fgets(modelo, sizeof(modelo), stdin);
	printf("Digite a distancia percorrida (em km):\n");
	scanf("%u", &distancia);
	printf("Digite o consumo de combustivel (em litros):\n");
	scanf("%u", &consumo);
	
	distancia_quadrup = distancia << 2;
	float consumo_medio = distancia/consumo;
	economico = consumo_medio < 5;
	
	printf("Modelo do Veiculo >> %s", modelo);
	printf("Consumo Medio >> %.2f\n", consumo_medio);
	printf("Distacia percorrida (Quadrupicada) >> %u\n", distancia_quadrup);
	printf("Eh Economico? >> %d\n", economico);
	
}
