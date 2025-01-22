//Guess the Number 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int gerador_num(){
	srand(time(NULL));
	return rand() % 100;
}

int main(){
	
	setlocale(LC_ALL, "");
	int chute, tentativas = 0;
	int num_correto = gerador_num();
	
	while(chute != num_correto){
		
		printf("\n**Guess The Secret Number**\n\n");
		
		printf("Digite seu Chute: ");
		scanf("%d", &chute);
		
		if(chute > num_correto){
			printf("Chute Maior que o Numero secreto\n");
		}else{
			printf("Chute Menor que o Numero secreto\n");
		}
		tentativas++;
		
		sleep(1);
//		system("cls");
		
	}
	
	printf("\n\nParabens Você acertou em %d tentativas\n", tentativas);
	
	 return 0;
}
