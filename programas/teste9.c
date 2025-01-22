#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	char name[61], nickname;
	int age, age_days, x;
	float skill_level, level_adjusted;
	unsigned int experience;
	bool team_games, experiente_jogos_times;
	
	printf("Digite o nome completo do jogador:\n");
	fgets(name, sizeof(name), stdin);
	printf("Digite a primeira letra de seu nome:");
	nickname = getchar();
	
	printf("Digite a sua idade (em anos):");
	scanf("%d", &age);
	age_days = age * 365.25;
	
	printf("Digite o seu nivel de habilidade (1 a 100):");
	scanf("%f", &skill_level);
	
	printf("Digite quantos anos você tem de experiência competitiva:");
	scanf("%u", &experience); //%u equivale ao unsigned int -> numero inteiro sem sinal
	
	level_adjusted = skill_level * (1 + experience / 100.0);
	
	printf("Voce prefere jogos em equipe (digite 1 para SIM e 0 para NAO): ");
	scanf("%d", &x);
	team_games = x;
	
	bool adult = age >= 18;
	bool newbie = experience < 2;
	experiente_jogos_times = experience >= 2 && team_games == 1;
	
	printf("\n***RESUMO DO JOGADOR***\n");
	printf("Nome >> %s\n", name);
	printf("Incial do Nickname >> %c\n", toupper(nickname));
	printf("Idade >> %d anos\n", age);
	printf("Idade em dias >> %d dias\n", age_days);
	printf("Nivel de habilidade Ajustada >> %.2f\n", level_adjusted);
	printf("Anos de Experiencia >> %d\n", experience);
	
	printf("\n***ANALISE***\n");
	printf("Maior de idade >> %d\n", adult);
	printf("Novato? >> %d\n", newbie);
	printf("Prefere Jogos em Equipe >> %d\n", experiente_jogos_times);
} 
