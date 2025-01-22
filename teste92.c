/*
Leia uma matriz 100 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 100 alunos. Leia também um vetor de 10 posições contendo o gabarito d e respostas que podem ser a, b, c ou d. 

Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor Resultado, contendo a pontuação correspondenteLeia uma matriz 100 x 10 que se refere respostas de 10 questões de múltipla escolha, 
referentes a 100 alunos. Leia também um vetor de 10 posições contendo o gabarito d e respostas que podem ser a, b, c ou d. 

Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor Resultado, contendo a pontuação correspondente
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char matriz[5][10];
	char gabarito[10] = {'a', 'b', 'c', 'd', 'b', 'd', 'a', 'b', 'c', 'd'};
	int i, j;
	int notas[5] = {0};
	
	printf("\n\n");
	printf("Responda as questões (a, b, c, d):\n");
	for(i=0; i<5; i++){
		for(j=0; j<10; j++){
			printf("\nAluno %d\n\n", i+1);
			printf("Resposta da questão %d >> ", j+1);
			scanf(" %c", &matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<5; i++){
		int acertos = 0;
		for(j=0; j<10; j++){
			if(gabarito[j] == matriz[i][j]){
				acertos++;
			}
		}
		notas[i] = acertos;
        printf("Nota do Aluno %d: %d\n", i + 1, notas[i]);
	}
	
}
