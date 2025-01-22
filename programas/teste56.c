/*
Faça um procedimento que recebe, por parâmetro, a hora de inicio e a hora de término de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos.

O procedimento deve retornar, também por parâmetro, a duração do jogo em horas e minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas
e que o jogo pode começar em um dia e terminar no outro.
*/
//60min = 1h
//xmin = 2h
//x = 60*2
//x = 120min
#include <stdio.h>
#include<stdlib.h>

int duracao_jogo(int, int, int, int, int *, int *);

int main(){
	
	int h_inicio, min_inicio, h_fim, min_fim, horas, minutos;
	printf("Digite a hora e o minuto de inicio do Jogo (hora:minuto):\n");
	scanf("%d:%d", &h_inicio, &min_inicio);
	
	printf("\nAgora digite a hora e o minuto do fim do Jogo (hora:minuto):\n");
	scanf("%d:%d", &h_fim, &min_fim);
	
	duracao_jogo(h_inicio, min_inicio, h_fim, min_fim, &horas, &minutos);
	printf("O jogo durou %d:%02d horas", horas, minutos);
	
	return 0;
}

int duracao_jogo(int h_ini, int min_ini, int h_fim, int min_fim, int *horas, int *minutos){
	
	if (h_fim < h_ini || (h_fim == h_ini && min_fim < min_ini)) {
        h_fim += 24;
    }
    
	*minutos = min_fim - min_ini;
	if(*minutos < 0){
		*minutos = abs(*minutos);
		*horas -= 1;
	}
	
	*horas = h_fim - h_ini;
}
