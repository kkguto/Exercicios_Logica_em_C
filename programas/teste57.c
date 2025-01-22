/*
Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um tri�ngulo e, neste caso, retornar qual o tipo de tri�ngulo formado. 
Para que X, Y e Z formem um tri�ngulo � necess�rio que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um tri�ngulo � menor do que a soma do comprimento dos outros dois lados.
 
O procedimento deve identificar o tipo de tri�ngulo formado observando as seguintes defini��es:

Tri�ngulo Equil�tero: os comprimentos dos 3 lados s�o iguais.
Tri�ngulo Is�sceles: os comprimentos de 2 lados s�o iguais.
Tri�ngulo Escaleno: os comprimentos dos 3 lados s�o diferent
*/
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int triangulo(double x, double y, double z){
	
	if(x == y && y == z){
		printf("Tri�ngulo Equil�tero");
	}else if(x == y && x != z || y == z && y != x|| z == x && z != y){
		printf("Tri�ngulo Is�sceles");		
	}else if(x != y && x != z && z != y){
		printf("Tri�ngulo Escaleno");
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
		printf("Esses valores n�o formam um triangulo!\n");
	}
	if(eh_trian){
		triangulo(x, y, z);
	}
	
	return 0;	
}
