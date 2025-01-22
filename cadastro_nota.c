/*
Desenvolva um programa para gerenciar notas de alunos que serão gravadas e lidas no arquivo
2P.txt. Para cada aluno, grave o nome e a nota separados por vírgula.

Ao ser executado, o programa deve apresentar o menu:

(1) Cadastrar novo aluno
(2) Mostrar todos os alunos
(3) Sair
Escolha uma opção: _

O programa deverá processar a operação selecionada pelo usuário e retornar para o menu principal
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int escolha = 0;
	
	while(escolha != 3){
		printf("\n(1) Cadastrar novo aluno\n(2) Mostrar todos os alunos\n(3) Sair\n\nEscolha uma opção: ");
		scanf("%d", &escolha);
		FILE *arquivo = fopen("arquivo.txt", "a+");
		
		if(escolha == 1){
			
			char nome[100];
			float nota;
			printf("Digite o nome do Aluno: ");
			scanf(" %s", nome);
			printf("Digite a nota do %s\n", nome);
			scanf("%f", &nota);
			
			fprintf(arquivo, "\n%s, %.2f", nome, nota);
			fclose(arquivo);
			
		}else if(escolha == 2){
			char linha[100];
			printf("\nNOMES, NOTAS\n\n");
			while(fgets(linha, sizeof(linha), arquivo) != NULL){
				printf("%s", linha);
			}
			fclose(arquivo);
			printf("\n");
			
		}else if(escolha == 3){
			printf("\nARQUIVO FECHADO\n");
			fclose(arquivo);
			
		}else{
			printf("\nInsira uma opção Válida\n");
		}
	}
	
}
