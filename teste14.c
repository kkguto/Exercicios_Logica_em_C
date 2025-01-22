#include <stdio.h>

int main(){
	
	unsigned int frequencia;
	float media;
	
	printf("Digite a media do Aluno (0.0 a 10.0):\n");
	scanf("%f", &media);
	
	printf("Digite a Frequencia do Aluno (0 a 100):\n");
	scanf("%u", &frequencia);
	
	if (frequencia < 75){
		printf("Reprovado");
	} else if(frequencia >= 75 && media > 6.0){
		printf("Aprovado");
	} else if(frequencia >= 75 && media < 6.0){
		printf("DE EXAME");
	}
}
