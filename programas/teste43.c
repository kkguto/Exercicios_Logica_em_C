/*
Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.P .R3).
*/

#include <stdio.h>
#include <math.h>

double volume_esfera(double);

int main(){
	
	double volume, raio = 5;
	
	volume = volume_esfera(raio);
	printf("Volume da Esfera >> %.2lf\n", volume);
	
	return 0;
}

double volume_esfera(double raio){
	return (4.0 / 3.0) * M_PI * pow(raio, 3);
}
