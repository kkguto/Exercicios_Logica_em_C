/*
Criando um tabuleiro de Jogo da Velha:

Crie um tabuleiro de jogo da velha, usando uma matrizes de caracteres (char) 3�3, onde o usu�rio pede o n�mero da linha (1 at� 3) e o da coluna (1 at� 3). 
A cada vez que o usu�rio entrar com esses dados, colocar um �X� ou �O� no local selecionado.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE (3)
int i, j;

int vitoria(char tabuleiro[SIZE][SIZE]){
	i = 0;
	if(tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' '){
		return 1;
	}
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ') {
        return 1;
    }
    for (i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') {
            return 1;
        }
    }
    for (i = 0; i < 3; i++) {
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ') {
            return 1;
        }
    }
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0; // Jogo continua
            }
        }
    }
    
    return -1;
}


int main(){
	
	char tabuleiro[SIZE][SIZE];
	bool vencer = 0;
	
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			tabuleiro[i][j] = ' ';
		}
	}
	while(vencer == 0){
		int x = 0, y = 0;
		
		while(true){
			printf("JOGADOR 1:\n\n");
			printf("Digite a posi��o que deseja (x:y) >> ");
			scanf("%d:%d", &x, &y);
			
			if(x >= 0 && x < SIZE && y >= 0 && y < SIZE && tabuleiro[x][y] == ' '){
				tabuleiro[x][y] = 'X';
				break;
			} else {
				printf("Lugar invalido Tente novamento\n\n");
				continue;
			}
		}
	
		for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {
                printf("%c ", tabuleiro[i][j]);    
            }
            printf("\n");
        }
		
		vencer = vitoria(tabuleiro);
		if(vencer){
			printf("\n\n**Vitoria do Jogador 1**\n\n");
			break;
		}else if(vencer == -1){
			printf("EMPATE");
			break;
		}
		while(true){
			printf("JOGADOR 2:\n\n");
			printf("Digite a posi��o que deseja (x:y) >> ");
			scanf("%d:%d", &x, &y);
			
			if(x >= 0 && x < SIZE && y >= 0 && y < SIZE && tabuleiro[x][y] == ' '){
				tabuleiro[x][y] = 'O';
				break;
			}else{
				printf("Lugar invalido Tente novamento\n\n");
				continue;
			}
		}

		for(i = 0; i < SIZE; i++){
			for(j = 0; j < SIZE; j++){
				printf("%c ", tabuleiro[i][j]);	
			}
			printf("\n");
		}
		
		vencer = vitoria(tabuleiro);
		if(vencer){
			printf("\n\n**Vitoria do Jogador 2**\n\n");
			break;
		}else if(vencer == -1){
			printf("EMPATE");
			break;
		}
			
	}
	return 0;
}
