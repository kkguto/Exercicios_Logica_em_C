#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define text "Simulação de Velocidade em uma Corrida de Bicicleta"

int main(){
	char nome[50];
	unsigned int distancia, tempo_total, velocidade, distancia_dobro;
	bool veloz;
	
	printf("%s\n\n", text);
	printf("Digite o nome do Ciclista:\n");
	fgets(nome, sizeof(nome), stdin);
	printf("Digite a Distancia percorrida por esse ciclista (em km):\n");
	scanf("%u", &distancia);
	printf("Digite o tempo total gasto em horas:\n");
	scanf("%u", &tempo_total);
	
	velocidade = distancia/tempo_total;
	veloz = velocidade >= 30;
	distancia_dobro = distancia << 1; 
	
	printf("Nome completo >> %s\n", nome);
	printf("Velocidade Media >> %u km/h\n", velocidade);
	printf("Distancia Percorrida (Dobrado) >> %u\n", distancia_dobro);
	printf("Eh Veloz? %d", veloz);
}
