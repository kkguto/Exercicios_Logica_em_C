/*
Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa. 
Crie e leia cinco eletrodomésticos compostos por: nome (máximo de 15 letras), potência (em KW) e tempo ativo por dia. Após isso, leia um tempo (em dia) e calcule e mostre o consumo total.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

struct eletrodomesticos{
	char nome[20];
	float potencia;
	float tempo_dia;
	float consumo;
};

int main(){
	
	setlocale(LC_ALL, "");

	struct eletrodomesticos energia[5];
	
	int tamanho = sizeof(energia)/sizeof(energia[0]);
	int i, dias = 7;
	float consumo_total = 0;
	
	for(i = 0; i < tamanho; i++){
		printf("\nEletrodoméstico %d:\n", i + 1);
		
		fputs("Nome do Eletrodomestico: ", stdout);
		getchar();
		fgets(energia[i].nome, sizeof(energia[i].nome), stdin);
		energia[i].nome[strcspn(energia[i].nome, "\n")] = 0;
		
		printf("Potencia do Eletrodomestico  (em KW): ");
		scanf("%f", &energia[i].potencia);
		
		printf("Tempo Ativo por Dia (em horas): ");
		scanf("%f", &energia[i].tempo_dia);
	}
	
	for(i = 0; i<tamanho; i++){
		energia[i].consumo = energia[i].potencia*energia[i].tempo_dia*dias;
		consumo_total += energia[i].consumo;
	}
	
	printf("\nConsumo de cada eletrodoméstico durante %d dias:\n", dias);
	
    for(i = 0; i < 5; i++) {
        printf("%-20s: %.2f kWh\n", energia[i].nome, energia[i].consumo);
    }
    
    printf("\nConsumo Total durante %d dias: %.2f kWh\n", dias, consumo_total);
	
	return 0;
}
