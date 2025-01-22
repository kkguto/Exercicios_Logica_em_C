/*
Crie uma struct chamada Funcionario com os campos: nome (string de at� 50 caracteres), id (int), cargo (string de at� 30 caracteres) e salario (float). 

Permita que o usu�rio cadastre at� 5 funcion�rios. 
Ap�s o cadastro, exiba a lista de funcion�rios com sal�rio acima de um valor que o usu�rio informe.
*/

#include <stdio.h>

struct Funcionario{
	char nome[50];
	int id;
	char cargo[50];
	float salario;
};

int main(){
	struct Funcionario funcionarios[5];
	int i;
	float valor;
	
	for(i = 0; i<5; i++){
		printf("\nNome do Funcionario: ");
		scanf(" %s", funcionarios[i].nome);
		
		printf("\nId do Funcionario: ");
		scanf("%d", &funcionarios[i].id);
		
		printf("\nCargo do Funcionario (CEO, Diretor, Gerente, Supervisor, Assistentes): ");
		scanf(" %s", funcionarios[i].cargo);
		
		printf("\nSalario do Funcionario: ");
		scanf("%f", &funcionarios[i].salario);
	}
	
	printf("\nInforme um valor de Salario: ");
	scanf("%f", &valor);
	printf("\n");
	
	printf("Lista de funcion�rios com sal�rio acima de %.2f\n\n", valor);	
	
	for(i = 0; i<5; i++){
		if(funcionarios[i].salario > valor){
			printf("Nome: %s, Id: %d, Cargo: %s, Salario: %.2f", i+1, funcionarios[i].nome, funcionarios[i].id, funcionarios[i].cargo, funcionarios[i].salario);
		}
		
	}
}
