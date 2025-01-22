#include <stdio.h>
#include <math.h>

int calcularAreaEsfera(float);

int main(){
	int escolha = 1;
	
	while(escolha == 1){
		
		float raio, area;
		printf("Digite o raio da esfera:\n");
		scanf("%f", &raio);
		
		area = calcularAreaEsfera(raio);
		printf("Area dessa circuferencia >> %.1f\n", area);
		
		printf("Deseja continuar calculando (1 para sim e 0 para nao):\n");
		scanf("%d", &escolha);		
	}
	return 0;
}

int calcularAreaEsfera(float raio){
	float pi = M_PI;
	return 4 * pi * (raio * raio);
}
