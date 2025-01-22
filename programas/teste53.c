/*
Faça uma função que recebe a média final de um aluno por parãmetro e retorna o seu conceito, conforme a tabela abaixo:  

Nota	Conceito
de 0,0 a 4,9	D
de 5,0 a 6,9	C
de 7,0 a 8,9	B
de 9,0 a 10,0	A
*/

#include <stdio.h>

void conceito(float);
 
int main(){
	float media = 10;
	conceito(media);
}

void conceito(float media){
	if(media >= 0.0 && media <= 4.9){
		printf("Conceito >> D");
	}else if(media >= 5.0 && media <= 6.9){
		printf("Conceito >> C");
	}else if(media >= 7.0 && media <= 8.9){
		printf("Conceito >> B");
	}else if(media >= 9.0 && media <= 10.0){
		printf("Conceito >> A");
	}else{
		printf("A media tem que ser maior ou igual a zero");
	}
}
