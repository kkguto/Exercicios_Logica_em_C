#include <stdio.h>
#include <stdlib.h>

int main(){
	
	unsigned int num_secreto, tentativas, chute, i;
	
	srand(time(NULL));
	for(i = 1; i < 101; i++){
		printf("%d\n", rand() % 100);
	}
	
	num_secreto = rand()%100;
	while(chute != num_secreto){
		
		printf("\nDigite um numero no intervalo de 1 a 100:\n");
		scanf("%u", &chute);
		
		if((chute < 1) || (chute > 100)){
			printf("Numero invalidos. Digite Novamante:\n");
		}else{
			if (chute == num_secreto){
				tentativas++;
				printf("Parabéns!!! Você acertou\n");
				printf("Numero de Tentativas >> %u\n", tentativas);
			}else if(chute < num_secreto){
				tentativas++;
				printf("Você chutou muito baixo!\n");
			}else if(chute > num_secreto){
				tentativas++;
				printf("Você chutou muito alto!\n");
			}	
		}		
	}				
	system("pause");
}
