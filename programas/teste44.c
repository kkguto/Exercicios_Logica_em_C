/*
Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. 
Se a letra for A o procedimento calcula a média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for H, a sua média harmônica.

A média calculada também deve retornar por parâmetro.
*/

#include <stdio.h>
#include <stdbool.h>
float media_aritmetica(float, float, float);
float media_ponderada(float, float, float);
float media_harmonica(float, float, float);

int main(){
	int i;
	float n1, n2, n3, media;
	char escolha;
	bool continuar = true;
	while(continuar){
		printf("[A] Media Aritmetica\n[P] Media Ponderada\n[H] Media Harmonica\n[S] Sair\n");
		scanf(" %c", &escolha);
		
		if(escolha == 'a'||escolha == 'A'){
			printf("\nCalcular a Media Aritmetica:\n\n");
			printf("Digite a nota 1:\n");
			scanf("%f", &n1);
			printf("Digite a nota 2:\n");
			scanf("%f", &n2);
			printf("Digite a nota 3:\n");
			scanf("%f", &n3);
			media = media_aritmetica(n1, n2, n3);
			printf("Media Aritmetica >> %.2f\n", media);
			
		}else if(escolha == 'p'||escolha == 'P'){
			printf("\nCalcular a Media Aritmetica:\n\n");
			printf("Digite a nota 1:\n");
			scanf("%f", &n1);
			printf("Digite a nota 2:\n");
			scanf("%f", &n2);
			printf("Digite a nota 3:\n");
			scanf("%f", &n3);
			media = media_ponderada(n1, n2, n3);
			printf("Media Aritmetica >> %.2f\n", media);
			
		}else if(escolha == 'h'||escolha == 'H'){
			
			printf("\nCalcular a Media Aritmetica:\n\n");
			printf("Digite a nota 1:\n");
			scanf("%f", &n1);
			printf("Digite a nota 2:\n");
			scanf("%f", &n2);
			printf("Digite a nota 3:\n");
			scanf("%f", &n3);
			media = media_harmonica(n1, n2, n3);
			printf("Media Aritmetica >> %.2f\n", media);
			
		}else if(escolha == 's'|| escolha == 'S'){
			printf("\nPrograma Encerrado\n");
			continuar = false;
		}else{
			printf("\nDigite um opcao valida\n\n");
		}	
	}
	return 0;
}
float media_aritmetica(float n1, float n2, float n3){
	return (n1 + n2 + n3)/3.0;
}

float media_ponderada(float n1, float n2, float n3){
	return((n1*5.0) + (n2*3.0) + (n3*2.0))/10.0;
}

float media_harmonica(float n1, float n2, float n3){
	float soma = (1.0/n1) + (1.0/n2) + (1.0/n3);
	return 3.0/soma;
}
