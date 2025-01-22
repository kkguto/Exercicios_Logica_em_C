/*
Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. 
Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt – 58 e, para mulheres, peso ideal = 62.1 x alt – 44.7.
*/

#include <stdio.h>

float peso_ideal(float, char);

int main(){
	char sexo;
	float alt;
	printf("Digite seu sexo(h para homem ou m para mulher):\n");
	sexo = getchar();
	printf("Digite sua Altura:\n");
	scanf("%f", &alt);
	float peso = peso_ideal(alt, sexo);
	if(peso != -1){
		printf("Peso Ideal >> %.2fkg", peso);
	}else{
		printf("Sexo inválido. Digite 'h' para homem ou 'm' para mulher.\n");
	}
	
	
	return 0;
}

float peso_ideal(float alt, char sexo){
	if(sexo== 'H'||sexo == 'h'){
		return 72.7 * alt - 58.0;
	}else if (sexo == 'M'||sexo == 'm'){
		return 62.1 * alt - 44.7;
	}else{
		return -1;
	}
}
