/*
A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o salário e número de filhos.
 
Faça um procedimento que leia esses dados para um número não determinado de pessoas e retorne a média de salário da população, 
a média do número de filhos, o maior salário e o percentual de pessoas com salário até R$350,00.
*/

#include <stdio.h>
#include <locale.h>

int dados(int num_pessoas){
	int i, soma_sal = 0, soma_fi = 0, salarios_350 = 0;
	float salarios[num_pessoas], num_filhos[num_pessoas];
	
	//Coleta de Dados
	for(i = 0; i < num_pessoas; i++){
		printf("Pessoa %d:\n", i+1);
		printf("Salário >> ");
		scanf("%f", &salarios[i]);
		printf("Número de Filhos >> ");
		scanf("%f", &num_filhos[i]);
		printf("\n");
	}
	
	//Operações exigidas
	float maior = salarios[0];
	for(i = 0; i < num_pessoas; i++){
		soma_sal += salarios[i];
		soma_fi += num_filhos[i];
		
		if(salarios[i] > maior){
			maior = salarios[i];
		}
		
		if(salarios[i] <= 350){
			salarios_350++;
		}
	}
	
	float media_sal = soma_sal/(float)num_pessoas;
	float media_fi = soma_fi/(float)num_pessoas;
	float percentual_350 = (salarios_350 / (float)num_pessoas) * 100;
	
	// Exibir os resultados
    printf("Média de salário >> %.2f\n", media_sal);
    printf("Média de filhos >> %.2f\n", media_fi);
    printf("Maior salário >> %.2f\n", maior);
    printf("Percentual de pessoas com salário até R$350,00 >> %.2f%%\n", percentual_350);
}

int main(){
	setlocale(LC_ALL, "");
	int num_pessoas;
	
	printf("Digite o número de Pessoas que deseja cadastrar:\n");
	scanf("%d", &num_pessoas);
	dados(num_pessoas);
	return 0;
}
