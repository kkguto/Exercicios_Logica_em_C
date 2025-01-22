/*
Faça um programa que leia um vetor com os dados de 5 carros: marca (no máximo 15 letras) ano e preço. 
Leia um valor p e mostre as informações de todos os carros com preço menor que p.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

struct carros{
	char marca[15];
	int ano;
	float preco;
};

void ordenar_anos(struct carros *dados){
	int i, j;
	struct carros temp;
	
	for(i = 0; i < 5 - 1; i++){
		for(j = 0; j < 5 - i -1; j++){
			if(dados[j].ano < dados[j+1].ano){
				temp = dados[j];
		W		dados[j] = dados[j+1];
				dados[j+1] = temp;				
			}
		}
	}
}

int main(){
	setlocale(LC_ALL, "");
	
	struct carros dados[5];
	int i;
	
	float p = 20000;
	
	for(i = 0; i < 5; i++){
		printf("\n\nCarro %d\n", i+1);
		fputs("Marca do Carro: ", stdout);
		getchar();
		fgets(dados[i].marca, sizeof(dados[i].marca), stdin);
		dados[i].marca[strcspn(dados[i].marca, "\n")] = 0;
		
		printf("Ano do Carro: ");
		scanf("%d", &dados[i].ano);
		
		printf("Preço do Carro: R$ ");
		scanf("%f", &dados[i].preco);
	}
	
	ordenar_anos(dados);
	int preco_menor_p = 0;
	printf("\n");
	for(i = 0; i < 5; i++){
		if(dados[i].preco < p){
			preco_menor_p++;
			printf("Marca: %s, Ano: %d, Preço: R$%.3f\n", dados[i].marca, dados[i].ano, dados[i].preco);
		}
	}
	printf("%d carros que custam menos que %.2f", preco_menor_p, p);
	
	return 0;
	
}

