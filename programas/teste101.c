/*
Crie uma struct chamada Aluno com os campos: nome (string de até 50 caracteres), matricula (int) e notas (array de 3 floats). 

Escreva um programa que permita cadastrar 3 alunos com suas respectivas notas. 

Ao final, exiba a média de cada aluno e indique se ele foi aprovado 
ou reprovado (aprovado se a média for maior ou igual a 7).
*/

#include <stdio.h>
#include <string.h>

struct Aluno{
	char nome[50];
	int matricula;
	float notas[3];
};

int main(){
	
	struct Aluno alunos[3];
	int i, j;
	
	for(i = 0; i < 3; i++){
		printf("\nAluno %d:\n", i+1);
		
		printf("Nome: ");
		scanf(" %s", alunos[i].nome);
		printf("Matricula: ");
		scanf("%d", &alunos[i].matricula);
		
		for(j = 0; j<3; j++){
			printf("Nota da prova %d: ", j+1);
			scanf("%f", &alunos[i].notas[j]);
		}
	}
	printf("\n");
	for(i = 0; i<3; i++){
		float soma = 0.0;
		for(j = 0; j<3; j++){
			soma+=alunos[i].notas[j];
		}
		float media = soma/3.0;
		if(media >= 7){
			printf("Nome: %s, Matricula: %d, Media: %.2f, Statos: Aprovado\n",alunos[i].nome, alunos[i].matricula, media);
		}else{
			printf("Nome: %s, Matricula: %d, Media: %.2f, Statos: Reprovado\n",alunos[i].nome, alunos[i].matricula, media);		
		}
	}
		
}
