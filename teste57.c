/*
Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. 
Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados.
 
O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:

Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
Triângulo Isósceles: os comprimentos de 2 lados são iguais.
Triângulo Escaleno: os comprimentos dos 3 lados são diferent
*/
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int triangulo(double x, double y, double z){
	
	if(x == y && y == z){
		printf("Triângulo Equilátero");
	}else if(x == y && x != z || y == z && y != x|| z == x && z != y){
		printf("Triângulo Isósceles");		
	}else if(x != y && x != z && z != y){
		printf("Triângulo Escaleno");
	}
	
}

int main(){
	setlocale(LC_ALL, "");
	double x, y, z;
	bool eh_trian = false;
	
	printf("Digite o tamanho dos lados do triangulo (x, y, z):\n");
	scanf("%Lf", &x);
	scanf("%Lf", &y);
	scanf("%Lf", &z);
	
	if(x < y+z && y < x+z && z < x+y){
		eh_trian = true;
	}else{
		printf("Esses valores não formam um triangulo!\n");
	}
	if(eh_trian){
		triangulo(x, y, z);
	}
	
	return 0;	
}
