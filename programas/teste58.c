/*
A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o sal�rio e n�mero de filhos.
 
Fa�a um procedimento que leia esses dados para um n�mero n�o determinado de pessoas e retorne a m�dia de sal�rio da popula��o, 
a m�dia do n�mero de filhos, o maior sal�rio e o percentual de pessoas com sal�rio at� R$350,00.
*/

#include <stdio.h>
#include <locale.h>

int dados(int num_pessoas){
	int i, soma_sal = 0, soma_fi = 0, salarios_350 = 0;
	float salarios[num_pessoas], num_filhos[num_pessoas];
	
	//Coleta de Dados
	for(i = 0; i < num_pessoas; i++){
		printf("Pessoa %d:\n", i+1);
		printf("Sal�rio >> ");
		scanf("%f", &salarios[i]);
		printf("N�mero de Filhos >> ");
		scanf("%f", &num_filhos[i]);
		printf("\n");
	}
	
	//Opera��es exigidas
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
    printf("M�dia de sal�rio >> %.2f\n", media_sal);
    printf("M�dia de filhos >> %.2f\n", media_fi);
    printf("Maior sal�rio >> %.2f\n", maior);
    printf("Percentual de pessoas com sal�rio at� R$350,00 >> %.2f%%\n", percentual_350);
}

int main(){
	setlocale(LC_ALL, "");
	int num_pessoas;
	
	printf("Digite o n�mero de Pessoas que deseja cadastrar:\n");
	scanf("%d", &num_pessoas);
	dados(num_pessoas);
	return 0;
}
