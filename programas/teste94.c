/*
Defina uma estrutura que irá representar bandas de música.
Essa estrutura deve ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que posição do ranking essa banda está dentre as suas 5 bandas favoritas.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>

int i, j;

struct bands{
	char band_name[30];
	char type[25];
	int num_members, ranking;
};

void store_music(struct bands *band_list){
	
	
	for(i = 0; i<5; i++){
		printf("\nBanda %d\n", i+1);
		
		fputs("Nome da Banda: ", stdout);
		getchar();//usado para tirar a quebra de linha do buffer
		fgets(band_list[i].band_name, sizeof(band_list[i].band_name), stdin);
        band_list[i].band_name[strcspn(band_list[i].band_name, "\n")] = 0;
		
		fputs("Tipo da Banda: ", stdout);
		fgets(band_list[i].type, sizeof(band_list[i].type), stdin);
        band_list[i].type[strcspn(band_list[i].type, "\n")] = 0;
		
		printf("Número de Integrantes: ");
		scanf("%d", &band_list[i].num_members);
		
		printf("Seu ranking: ");
		scanf("%d", &band_list[i].ranking);
	}
}

void search_rank(struct bands *band_list){
	int rank, found = 0;
	printf("\nDigite o rank que deseja Ver: ");
	scanf("%d", &rank);
	for( i = 0; i < 5; i++){
		if(rank == band_list[i].ranking){
			printf("\n\nRank  Nome                  Tipo                  Integrantes");
            printf("\n%4d  %-20s %-20s %4d\n\n", band_list[i].ranking, band_list[i].band_name, band_list[i].type, band_list[i].num_members);
			found = 1;
			break;
		}
	}
	if(!found){
		printf("\n\nRank não Encontrado\n\n");
	}
}

void search_music_type(struct bands *band_list){
	int found = 0;
	char type[30];
	fputs("\nTipo da Banda: ", stdout);
	getchar();//usado para tirar a quebra de linha do buffer
	fgets(type, sizeof(type), stdin);
    type[strcspn(type, "\n")] = 0;
    
	printf("\n\nRank  Nome                  Tipo                  Integrantes");
	for( i = 0; i < 5; i++){
		if(strcmp(type, band_list[i].type) == 0){
			printf("\n%4d  %-20s %-20s %4d", band_list[i].ranking, band_list[i].band_name, band_list[i].type, band_list[i].num_members);
			found = 1;
		}
	}
	
	if(!found){
		printf("\nTipo não Encontrado\n\n");
	}
	printf("\n");
	
}

int main(){
	
	setlocale(LC_ALL, "");
	
	struct bands band_list[5];
	
	printf("Top 5 bandas Favoritas:\n\n");
	
	//coleta de dados
	while(true){
		int escolha = 0;
		printf("[1] Armazenar As 5 bandas\n[2] Buscar Rank\n[3] Buscar Tipo da Musica\n[4] Sair\n Sua Escolha é: ");
		scanf("%d", &escolha);
		
		if(escolha == 4){
			printf("\nENCERRADO\n");
			break;
		}
		if(escolha == 1){
			
			store_music(band_list);
			
		}else if(escolha == 2){
			
			struct bands temp;
			for(i = 0; i < 5 - 1; i++){
				for(j = 0; j < 5 - i - 1; j++){
					if(band_list[j].ranking > band_list[j+1].ranking){
					temp = band_list[j];
					band_list[j] = band_list[j+1];
					band_list[j+1] = temp;
					}
				}
			}
			search_rank(band_list);
			
		}else if(escolha == 3){
			search_music_type(band_list);
			
		}else{
			printf("\nOpção Invalida\n\n");
		}
	}
	return 0;
}
