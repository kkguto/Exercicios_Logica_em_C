#include <stdio.h>
#include <string.h>

int media(float, float, float, float);

int main(){
	float n1, n2, n3, n4, media_notas;
	char nome[51];
	
	printf("Digite o nome do aluno:\n");
	fgets(nome, sizeof(nome), stdin);
	nome[strcspn(nome, "\n")] = 0; 
	printf("Digite as 4 notas do aluno (neste formato >> #-#-#-#):\n");
	scanf("%f-%f-%f-%f", &n1, &n2, &n3, &n4);
	
	media_notas = media(n1, n2, n3, n4);
	
	printf("%s -> Media >> %.2f\n %s", nome, media_notas, (media_notas >= 7.0 ? "**Aprovado**\n" : "**Reprovado**\n"));
}

int media(float n1, float n2, float n3, float n4){
	float soma = n1 + n2 + n3 + n4;
	return soma/4;
}
